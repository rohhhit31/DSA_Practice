#include<iostream>
using namespace std;
int main(){

    int i, j;
    for (int i = 1; i <= 5;i++){
        for (j = 1; j <= 5;j++){
            if(j<=1)
                cout << "*";
                else
                    cout << " ";

        }
        cout << "/n";
    }
    return 0;
}
