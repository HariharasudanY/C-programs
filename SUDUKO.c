#include <stdio.h>
int rowcheck(int b[9][9]);
int main()
{int r;

 int a[9][9]={{1,2,3,4,5,6,7,8,9},
           {2,3,4,5,6,7,8,9,1},
 {3,4,5,6,7,8,9,1,2},
 {4,5,6,7,8,9,1,2,3},
 {5,6,7,8,9,1,2,3,4},
 {6,7,8,9,1,2,3,4,5},
 {7,8,9,1,2,3,4,5,6},
 {8,9,1,2,3,4,5,6,7},
 {9,1,2,3,4,5,6,7,8}};
  r=rowcheck(a[9][9]);
  printf("%d\n",r);
  if(r==1)
  {
      printf("rowcheck success\n");
  }
  else
  {
     printf( "row check failure");
  }
    return 0;
}

int rowcheck(int b[9][9])
{
    int i,j,k;
    for (k=0;k<9;k++)
    {
        for (i=0;i<9;i++)
        {
            for (j=0;j<9;j++)
            {  printf("%d\n",b[i][j]);
                if(i!=j)
                {
                if(b[k][i]==b[k][j])
                {
                    return 1;
                    break;
                }
                else
                {
                        printf("process executed");

                    return 0;
                }
                }
            }
        }
    }

}
