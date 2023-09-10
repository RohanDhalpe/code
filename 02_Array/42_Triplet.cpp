/*
  bool find3Numbers(int arr[], int n, int X)
    {
       sort(arr,arr+n);
       
       for(int i=0;i<n;i++)
       {
           int ele=arr[i];
           int s=i+1;
           int e=n-1;
           
           while(s<e)
           {
             int sum=ele+arr[s]+arr[e];
             
             if(sum==X) return true;
             else if(sum>X) e--;
             else s++;

           }
       }
      return false;
    }
*/