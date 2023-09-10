#include <iostream>
#include<vector>
#include<map>

using namespace std;

vector <int> twoSum(vector<int> &arr,int n,int target)
{
    map<int,int>mp;
   
   for(int i=0;i<n;i++){
      int num=arr[i];
      int require=target-num;
      
      if(mp.find(require)!=mp.end())
      {
          return {mp[require],i};
      }
      mp[num]=i;
   }
  return{-1,-1};
}

int main()
{
    vector<int> arr= {2, 6, 5, 8, 11};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int target=14;
    
    vector<int> ans=twoSum(arr,n,target);
    
    cout<<ans[0]<<" "<<ans[1];
    
    return 0;
}