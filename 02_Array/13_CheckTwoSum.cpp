#include <iostream>
using namespace std;

bool twoSum(int arr[],int n,int target) {
     int low=0;
     int high=n-1;
     
     while(low<high)
     { 
          int sum=arr[low]+arr[high];
          if(sum==target){
               return true;
          }else if(sum>target){
               high--;
          }else{
               low++;
          }
     }
   return false;
}

int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int target=14;
    
    cout<<twoSum(arr,n,target);
    
      

    return 0;
}