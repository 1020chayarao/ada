#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void insertion_sort(int a[],int n)
{
    int i=0,item,j;
    for(i=1;i<n;i++)
    {
        item=a[i];
        j=i-1;
        while(j>=0 && a[j]>item)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=item;
    }

}

int main()
{
    int a[50],n,i;
    clock_t st,end;

    printf("\nenter the size of array\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        //a[i]=rand()%100;
        scanf("%d",&a[i]);
    }

    printf("\narray before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    st=clock();
    insertion_sort(a,n);
    end=clock();

    printf("\narray after sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    double cpu_time_used=((double)(st-end
                                   ))/CLOCKS_PER_SEC;


    printf("\ntime taken=%f\n",cpu_time_used);

    return 0;


}
