#include<iostream>

using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        
    }
}

void RotateLeft(int arr[],int n){
     int temp=arr[0];
     
     for(int i=0;i<n;i++){
          arr[i]=arr[i+1];
     }
     arr[n-1]=temp;
}

int main()
{
    int arr[]={2,3,5,7,11};
    int n=sizeof(arr)/sizeof(0);
    
    cout<<"Before Rotating ";
    printArray(arr,n);
    
    cout<<endl;
    RotateLeft(arr,n);
    
    cout<<"After Roatating ";
    printArray(arr,n);
    
    return 0;
}
