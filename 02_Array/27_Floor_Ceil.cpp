#include <iostream>
#include<vector>

using namespace std;

int floor(vector<int>&arr,int n,int x)
{
     int low=0;     // largest element which is just smaller than x 
     int high=n-1;
     
     int ans=n;
     while(low<=high)
     {
        int mid=(low+high)/2;
        if(arr[mid]<=x){
             ans=arr[mid];
             low=mid+1;
        }else{
           high=mid-1;  
        }
     }
   return ans;  
}

int ceil(vector<int>&arr,int n,int x)
{
     int low=0;              //smallest element which is just smaller than x
     int high=n-1;
     
     int ans=n;
     while(low<=high)
     {
        int mid=(low+high)/2;
        if(arr[mid]>=x){
             ans=arr[mid];
             high=mid-1;
        }else{
           low=mid+1;  
        }
     }
   return ans;  
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n =arr.size();
    int x=9;
    
    int floorValue=floor(arr,n,x);
    int CeilValue=ceil(arr,n,x);
    
    cout<< "Floor is "<<floorValue<<" "<<"ceil is "<<CeilValue;

   
    return 0;
}
