#include<stdio.h>
#include<conio.h>
void insert(int [],int);
void main()
{
    int arr[6],i,j=0;
    for(i=0;i<6;i++)
    {
        printf("enter no");
        scanf("%d",&arr[i]);
    }

    insert(arr,j);
    for(i=0;i<6;i++)
    {
        printf("%d \t",arr[i]);
    }
    getch();

}
void insert(int arr[6],int i)
{
    int j,pos,temp,small,x;

    if(i<6)
    {
        for(x=0;x<6;x++)
    {
        printf("%d \t",arr[x]);
    }
    printf("\n");
        small=arr[i];
        for(j=i;j<6;j++)
        {
            if(small>arr[j])
            {
                small=arr[j];
                pos=j;
            }

        }
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
        insert(arr,i+1);
    }

}
