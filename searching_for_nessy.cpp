#include<stdio.h>
 
int main()
{
    int nro_test,n,m,s,i;
    while(scanf("%d",&nro_test)==1)
    {
        for(i=1;i<=nro_test;i++)
        {
            scanf("%d%d",&n,&m);
            s=(n/3)*(m/3);
            printf("%d\n",s);
        }
    }
    return 0;
}