#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        
    }
}

void BubbleSort(int arr[],int n){
   
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-1-i;j++)
        {
           if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
           }
        }
        
        if(swapped==false){
            break;
        }
    }
}

int main(){

 int arr[]={44,8,55,12};

 int n=sizeof(arr)/sizeof(arr[0]);

 cout<<"Before Sorting ";
 printArray(arr,n);

 BubbleSort(arr,n);
 cout<<endl;

 cout<<"After sorting";
 printArray(arr,n);


    return 0;

}