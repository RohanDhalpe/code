/*
    int kthSmallest(int arr[], int l, int r, int k) 
    {
       priority_queue<int>pq;
        
        int n=r-l+1;
        
       for(int i=0;i<n;i++){
           pq.push(arr[i]);
       }
       
       while(pq.size()>k) pq.pop();
        
       return pq.top();
    }

*/