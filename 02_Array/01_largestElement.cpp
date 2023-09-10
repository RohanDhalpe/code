#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        
    }
}

int LargestElement(int arr[],int n){  
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}


int main(){

 int arr[]={44,8,55,12};

 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<LargestElement(arr,n);

return 0;
//  TC=O(N) 
//  sc=O(1)
}