#include<stdio.h>
#include<conio.h>
void sort(int [],int);
void main()
{
    int arr[6],i,j=0;
    for(i=0;i<6;i++)
    {
        printf("enter the no");
        scanf("%d",&arr[i]);
    }
    sort(arr,j);
for(i=0;i<6;i++)
    {
        printf("%d \t",arr[i]);
    }
    getch();
}
void sort(int arr[6],int x)
{
    int i,temp,j;
    if(x<6)
    {
         for(i=0;i<6;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
        for(j=x;j>=0;j--)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
        sort(arr,x+1);
    }
}
