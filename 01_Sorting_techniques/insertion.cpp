#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        
    }
}

void InsertionSort(int arr[],int n)
{
    for(int i=0;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main(){

 int arr[]={44,8,55,12,31,19};

 int n=sizeof(arr)/sizeof(arr[0]);

 cout<<"Before Sorting ";
 printArray(arr,n);

 InsertionSort(arr,n);
 cout<<endl;

 cout<<"After sorting ";
 printArray(arr,n);


    return 0;

}