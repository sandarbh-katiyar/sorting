#include<stdio.h>
#include<conio.h>
int fix(int [],int,int);
void sort(int [],int,int);
void main()
{
    int arr[10],i,upper=10,lower=0;


    printf("enter the 10 no");

    for(i=0;i<10;i++)
    {
      scanf("%d",&arr[i]);
    }

    sort(arr,lower,upper);

    for(i=0;i<10;i++)
    {
      printf("%d \t",arr[i]);
    }
    printf("\n");

    getch();


}
void sort(int arr[10],int lower, int upper)
{
    int j,i;

    if(lower<upper)
    {

        j=fix(arr,lower,upper);

        sort(arr,lower,j);

        sort(arr,j+1,upper);

    }





}
int fix(int arr[10],int lower,int upper)
{
    int pivot,temp,i,x,j=0,z;

    pivot=arr[lower];
    for(i=lower;i<upper;i++)
    {
        if(pivot>arr[i])
        {
            j++;
            temp=arr[i];
            for(x=i;x>lower;x--)
            {
                arr[x]=arr[x-1];
            }
            arr[x]=temp;

        }

    }

    for(i=0;i<10;i++)
    {
      printf("%d \t",arr[i]);
    }
    printf("\n");
    z=lower+j;
    return z;
}
