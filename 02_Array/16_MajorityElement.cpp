#include<iostream>
#include<map>
using namespace std;

int majorityElement(int arr[], int n) 
{
     map<int,int>mp;
  
     for(int i=0;i<n;i++)
     {    
          mp[arr[i]]++;
     }
     
     for(auto it:mp)
     {
       if(it.second>(n/2))
       {
           return it.first;
       }
     }
   return -1;  
}

int main()
{
   int arr[] = {2, 2, 1, 1, 1, 2, 2};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   cout<<majorityElement(arr,n);
   
    
    return 0;
}