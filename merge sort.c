#include<stdio.h>
#include<conio.h>
void divide(int [],int,int);
void merge(int [],int,int,int);
void main()
{
    int arr[6],i,lower=0,upper=6;
    for(i=0;i<6;i++)
    {
        printf("enter the no");
        scanf("%d",&arr[i]);
    }
    divide(arr,lower,upper);
    for(i=0;i<6;i++)
    {
        printf("%d \t",arr[i]);
    }
    getch();
}
void divide(int arr[6],int lower,int upper)
{
    int i;
    if(lower!=upper)




    {
        int mid;
        mid=(lower+upper)/2;

        divide(arr,lower,mid);
        divide(arr,mid+1,upper);
        for(i=0;i<6;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
        merge(arr,lower,mid,upper);
    }
}
void merge(int arr[6],int lower,int mid,int upper)
{
    int i=lower,j=mid,temp;

    while(i<mid&&j<upper)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
        }
        else
        {
            j++;
        }

    }
    for(i=0;i<6;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
}
