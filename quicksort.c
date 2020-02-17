#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int partition(int a[],int l, int r)
{
    int i,j,p,temp;
    p=a[l];
    i=l;
    j=r+1;
    while(i<j)
    {
        do{
           i=i+1;
           }
        while(a[i]<=p);
        do{
           j=j-1;
           }
        while(a[j]>p);
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    a[l]=a[j];
    a[j]=p;
    return j;
}
void quicksort(int a[], int l, int r)
{
    int s;
    if(l<r)
    {
        s=partition(a,l,r);
        quicksort(a,l,s-1);
        quicksort(a,s+1,r);
    }
}void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
int main()
{
    int i,n,a[100],end,st;
    clock(),st,end;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("the array elements are\n");
    for(i=0;i<n;i++)
    {
       a[i]=rand()%200;
    }
    display(a,n);
    printf("\n elements after swapping are\n");
    st=clock();
    quicksort(a,0,n-1);
    sleep(1);
    end=clock();
    display(a,n);
    double C=((double)(end-st))/CLOCKS_PER_SEC;
    printf("\n%lf",C);
    return 0;
}
