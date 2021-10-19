#include <stdio.h>
int main ()
{
    int t;
    long a, b;
    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%ld %ld", &a, &b);
        if (a < b)
            printf("<\n");
        if (a > b)
            printf(">\n");
        if (a==b)
            printf("=\n");

        t--;
    }

    return 0;
}