#include <iostream>
#include<vector>
#include<climits>

using namespace std;

int MinimumInRotated(vector<int> &arr){

     
     int low=0;
     int high=arr.size()-1;
     int ans=INT_MAX;

     while(low<=high)
     {  
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid]){
            ans=min(ans,arr[low]);
            low=mid+1;
        }else{
            ans=min(ans,arr[mid]);
            high=mid-1;
        }
    }
  return ans;
}



int main()
{
    vector<int> arr = {6,7,8,1,2,3};
    int n =arr.size();
    int target=19;
    int ans=MinimumInRotated(arr);
    cout<<"Minimum Element is "<<ans;
    
    
    return 0;
}
