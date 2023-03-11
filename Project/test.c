#include<stdio.h>
void fun(int *i,int *j)
{
    *i = *i + *i;
}
int main()
{
    int liat[50];
    int i;
    printf("Enter data:\n");
    for(i = 0;i<=13;i++)
    {
        scanf("%d",&liat[i]);
    }
        printf("%d\n",(liat[1]*(-1))*(liat[1]*(-1)));
        printf("%d\n",(liat[0]*(-1))*((1)*(-1)));
        printf("%d\n",(liat[7]*liat[7])*((-1)*(-1)));
}