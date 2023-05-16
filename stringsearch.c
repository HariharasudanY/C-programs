#include <stdio.h>
#include <stdlib.h>

int search(char a[][4],char w[]);
int main()
{
    char a[3][4]={{"ABCE"},{"SFCS"},{"ADEE"}};
    char w[6]={"ABCCED"};
    int c=0;
search(a,w);
}

int search(char a[][4],char w[])
{

for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        printf("%c ",a[i][j]);
    }
}


}
