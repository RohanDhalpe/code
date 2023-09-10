#include <iostream>
#include<vector>

using namespace std;

int UpperBound(vector<int>&arr,int n,int x)
{
     int low=0;
     int high=n-1;
     
     int ans=n;
     while(low<=high)
     {
        int mid=(low+high)/2;
        if(arr[mid]>x){     //arr[mid]>=x) in case of Lower Bound
             ans=mid;
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
    int ind = UpperBound(arr, n, x);
    cout << "The Upper bound is the index: " << ind << "\n";
    return 0;
}
