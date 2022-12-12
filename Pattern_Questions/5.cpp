/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
int i ,j ;
for(int i=1; i<=5; i++){
    for( int j=1; j<=9;j++){
        if(j>=6-i && j<=4+i)
    cout<<"*";
    else
    cout<<" ";
        
    }
    cout <<endl;
}

        
        
    
    return 0;
}