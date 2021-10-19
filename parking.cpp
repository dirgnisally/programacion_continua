#include <iostream>
#include <stdio.h>
using namespace std;    

int main(){
    int t, n;
    int xi, dm;
    
    int min, max;

    //scanf("%d", &t);
    cin>>t;
    //printf("%s", t);
    //cout<<"hello"<<t<<endl;
    while(t > 0){
        cout<<t<<endl;
        
        scanf("%d", &n);
        min = 99;
        max = 0;
        while(n > 0 && n<=20){
            
            scanf("%d", &xi);

            if (xi < min)
                min = xi;
            if (xi > max)
                max = xi;


            n--;
        }

        dm =( (max - min) * 2);
        
        printf("%d\n", dm);
        
        t--;
    }
    

    return 0;
}