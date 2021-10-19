#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;    


int main() {
    int K, N, M, X, Y;
    cin>>K;

    while(K > 0 && K < pow(K, 3)) {
        scanf("%d %d", &N, &M);
        scanf("%d %d", &X, &Y);
            
            if(X == N || Y == M)
                cout<<"divisa"<<endl;
            else if(X > N && Y > M)
                
                cout<<"NE"<<endl;
            else if(X < N && Y > M)
                
                cout<<"NO"<<endl;
            else if(X < N && Y < M)
                
                cout<<"SO"<<endl;
            else
                cout<<"SO"<<endl;
       
        K--;
    }
    return 0;
}