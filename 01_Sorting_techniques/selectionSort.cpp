#include<iostream>
using namespace std;

// We sorted 4 elements in these iterations. We are just left with the last element, and since all the other elements are sorted, we can safely say that the last element is also in the correct position. This is why the selection sort runs N-1 iterations for N elements.

void SelectionSort(int arr[],int n){
     for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
     }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        
    }
}

int main(){

 int arr[]={44,8,55,12,31,7,96,456};

 int n=sizeof(arr)/sizeof(arr[0]);

 cout<<"Before Sorting "<<endl;
 printArray(arr,n);

 SelectionSort(arr,n);

 cout<<"After sorting";
 printArray(arr,n);

    return 0;
}