#include <stdio.h>
int main()
{
    int i, j,n;
        printf("Enter the size of array; ");
       scanf ("%d",&n);
    int a[5],count=0;

    printf("Enter the elements; ");

    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }


 for(i=0;i<n;i++)
 {
     count++;
        i+=a[i];
        if(i>=n)
        {
        count++;
        }
            printf("Output:%d",count);

}


    printf("Output:%d",count);



}

