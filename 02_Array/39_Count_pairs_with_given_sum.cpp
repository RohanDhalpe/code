//  int getPairsCount(int arr[], int n, int k) {
//       int count=0;
//        unordered_map<int,int>mp;
//        for(int i=0;i<n;i++)
//        {
//            int rem=k-arr[i];
//            if(mp.find(rem)!=mp.end()){
//              count+=mp[rem];
//            }
//            mp[arr[i]]++;
//        }
//       return count;
//   }