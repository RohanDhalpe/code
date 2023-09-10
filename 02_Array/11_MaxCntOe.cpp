#include <iostream>
#include <vector>

using namespace std;

int MaximunCountOne(int arr[],int n){
   int cnt=0;
   int maxcnt=0;
   
   for(int i=0;i<n;i++){
        if(arr[i]==1)
        {
          cnt++;  
        }else{
          cnt=0;
        } 
      maxcnt=max(cnt,maxcnt);
   }
   return maxcnt;
}

int main()
{
   int arr[]= { 1, 1, 0, 1, 1, 1 };
   
   int n=sizeof(arr)/sizeof(arr[0]);
   
   cout<<MaximunCountOne(arr,n);

  return 0;
}