
#include <stdio.h>
#include<stdlib.h>
/*int main()
{
    //union
    int n,m,i,j,k,count=0,flag=0;
     printf("Enter the size a and b \n");
        scanf("%d%d", &n,&m);

        int a[n],b[m];

        printf("Enter the ele of arr1 \n");

        for (i = 0; i < n;i++)
         scanf("%d", &a[i]);
          printf("Enter the ele of arr2 \n");

        for (i = 0; i < m;i++)
         scanf("%d", &b[i]);


         for(i=0;i<n;i++)
         {
             for(j=i;j<m;j++)
         {
             /*if(a[i]==!=b[j])
             flag=0;
             else
             {
                 flag=1;
                 break;
             }
             if(a[i]==b[j])
             count++;

             }


       }
                printf("count is %d",count);


         printf("count is %d",n+m-count);

}*/

int main()
{

    int n,m,i,j,k,count=0,flag=0;
     printf("Enter the size a and b \n");
        scanf("%d%d", &n,&m);

        int a[n],b[m];

        printf("Enter the ele of arr1 \n");

        for (i = 0; i < n;i++)
         scanf("%d", &a[i]);
          printf("Enter the ele of arr2 \n");

        for (i = 0; i < m;i++)
         scanf("%d", &b[i]);


         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
         {
             if(a[i]==b[j])
           {
             count++;
           }
             }


       }
                printf("count is %d",m+n-2*count);



}



