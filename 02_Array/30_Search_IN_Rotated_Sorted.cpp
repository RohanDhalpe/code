#include <iostream>
#include<vector>

using namespace std;

int SearchInRotatedSorted(vector<int> &arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==target){
            return mid;
        }

        if(arr[low]<=arr[mid])
        {
             if(arr[low]<=target && target<=arr[mid]){
                  high=mid-1;
             }else{
                low=mid+1;
             }
        }else{
            if(arr[mid]<=target && target <=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    return -1;
}


int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n =arr.size();
    int target=19;
    int ind=SearchInRotatedSorted(arr,target);
    cout<<"Index of "<<target<<" is "<<ind;
    
    
    return 0;
}
