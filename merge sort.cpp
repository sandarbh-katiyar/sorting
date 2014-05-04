#include <iostream>

using namespace std;

int a[10];
void merge(int,int,int);
void mergesort(int first,int last)
{

    if(first<last)
    {
         int mid=(first+last)/2;
    mergesort(first,mid);
    mergesort(mid+1,last);
    merge(first,mid,last);

}
}

int main()
{
     int i;
    cout<<"enter six no";
    for(i=0;i<6;i++)

    cin>>a[i];
    mergesort(0,5);
    for(i=0;i<6;i++)
    cout<<a[i]<<"\t";
    return 0;
}

void merge(int first,int mid,int last)
{

    int high,i,j,b[50],k;
    high=first;
    i=first;
    j=mid+1;

    while(high<=mid && j<=last)
    {
        if(a[high]<a[j])
           {
               b[i]=a[high];
               high++;
            }
          else
          {
              b[i]=a[j];
              j++;
          }

        i++;
    }

    if(high>mid)
      {
         for(k=j;k<=last;k++)
           {
             b[i]=a[k];
             i++;
           }
      }
    else
      {
         for(k=high;k<=mid;k++)
           {
             b[i]=a[k];
             i++;
           }
      }

 for(k=first;k<=last;k++)
  a[k]=b[k];

}
