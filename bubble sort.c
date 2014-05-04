#include<stdio.h>
#include<conio.h>
void sort(int arr[6],int x)
{
    int i,temp;

    if(x>0)
    {
        for(i=0;i<6;i++)
    {

        printf("%d \t",arr[i]);
    }


        for(i=0;i<6;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        sort(arr,x--);
    }
    else return;


}
void main()
{
    int arr[6],i,a=6;
    for(i=0;i<6;i++)
    {
        printf("enter the no");
        scanf("%d",&arr[i]);
    }
    sort(arr,a);
    for(i=0;i<6;i++)
    {

        printf("%d \t",arr[i]);
    }
    getch();
}
