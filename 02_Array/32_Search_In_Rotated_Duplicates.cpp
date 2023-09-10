#include <iostream>
#include<vector>

using namespace std;

bool SearchInRotatedSorted(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;

        while(low<=high){

            int mid=(low+high)/2;
            if(target==nums[mid]) return true;

            if((nums[low]==nums[mid])  && (nums[high]==nums[mid])){
                low++;
                high--;
                continue;
            }
            
            if(nums[low]<=nums[mid])
            {
                if((nums[low]<=target) && (target<=nums[mid])){
                    high=mid-1;
                }else{
                    low=mid+1;
                }

            }else{
                 if((nums[mid]<=target) && (target<=nums[high])){
                     low=mid+1;
                 }else{
                     high=mid-1;
                 }
            }
        }
        return false;
    }


int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n =arr.size();
    int target=19;
    cout<<SearchInRotatedSorted(arr,target);
     return 0;
}
