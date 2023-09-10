#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        
    }
}

void ReverseArray(int arr[],int i,int n)
{
   if(i>=n/2){
    return ;
   }
   
   swap(arr[i],arr[n-1-i]);
   ReverseArray(arr,i+1,n);
}
int main()
{
    int arr[]={44,8,55,12};
    int n=sizeof(arr)/sizeof(arr[0]);

   ReverseArray(arr,0,n);
   
   printArray(arr,n);

    return 0;
}