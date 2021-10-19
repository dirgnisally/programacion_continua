#include <iostream>
#include <string>

using namespace std;

int main(){
    
   string linea;
   string remp="``"; 
   string remp2="''";
   bool p=true; 
    while(getline (cin,linea)) {      
            for(int j=0;j<linea.size();j++){
                  if(linea[j]=='"'){
                        if(p){
                            
                            cout<<remp;       
                            p=false;        
                        }else{
                            
                            cout<<remp2;
                            p=true; 
                        }                  
                  }
                  else {
                     cout <<linea[j];
                  }      
            }  

            cout<<endl; 
            
    }  
 return 0;   
}