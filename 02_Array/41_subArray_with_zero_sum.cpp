/*

Subarray with 0 sum

    bool subArrayExists(int arr[], int n)
    {
       unordered_map<int,int>mp;
       
       for(int i=0;i<n;i++)
       {
           sum+=arr[i];
           
           if(sum==0) return true;
           
           if(mp.find(sum) != mp.end()) return true;
           
           mp[arr[i]]++;
       }
       return false;
    }
*/