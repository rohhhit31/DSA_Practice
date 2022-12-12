// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void selectionsort(int arr[], int n){
    for( int i =0 ; i<n-1;i++){
        int minIdx =i;
    }
    for( int j= i+1;j<n;j++){
        if(arr[i]< arr[minIdx])
        minIdx =j;
        
    }
    
    //swap(arr[minIdx,arr[i]]);  
    int temp= arr[i];
    arr[i]=arr[minIdx];
    arr[minIdx]=temp;
    
}
int main() {
    int arr[];
    int n ;
    cin>>n;
    for( int i =0; i<n ;i++){
        cin>>arr[i];
    }
    

    return 0;
}