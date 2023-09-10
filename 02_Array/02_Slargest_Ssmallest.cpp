#include<iostream>
#include<climits>

using namespace std;

int SecondLargest(int arr[],int n)
{
     int largest=arr[0];
     int SecondLargest=-1;
     
     for(int i=0;i<n;i++)
     {
          if(arr[i]>largest){
               SecondLargest=largest;
               largest=arr[i];
          }else if(arr[i]<largest && arr[i]>SecondLargest){
               SecondLargest=arr[i];
          }
     }
     
     return SecondLargest;
}

int SecondSmallest(int arr[],int n)
{
    int smallest=arr[0];
    int SecondSmallest=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
         if(arr[i]<smallest){
              SecondSmallest=smallest;
              smallest=arr[i];
         }else if(arr[i]>smallest && arr[i]<SecondSmallest){
              SecondSmallest=arr[i];
         }
     }
   return SecondSmallest;  
}

int main()
{
    int arr[]={4,7,5,19,11,9};
    int n=sizeof(arr)/sizeof(0);
    
    cout<<SecondLargest(arr,n)<<endl;
   cout<<SecondSmallest(arr,n);
    
    return 0;
}

// TC-O(N)
// SC-O{1}

