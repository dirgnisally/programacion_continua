#include <iostream>
#include <stdio.h>
using namespace std;    

int main(){
    string frase;
    while(getline(cin,frase)){
        //printf("%s", s)
        cout << frase << endl;
    }
    return 0;
}