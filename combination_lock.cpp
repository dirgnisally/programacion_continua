#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int inicio, primero, segundo, tercero;
    
    scanf("%d %d %d %d", &inicio, &primero, &segundo, &tercero);
    
    while (inicio || primero || segundo || tercero)
    {
        int n = 1080;
        n = n + ((inicio - primero + 40) % 40 + (segundo - primero + 40) % 40 + (segundo - tercero + 40) % 40) * 9;
        printf("%d\n", n );
        
        scanf("%d %d %d %d", &inicio, &primero, &segundo, &tercero);
    }
}