//find subarray which gives maximum sum
#include <iostream>
using namespace std;

int maxSubarraySum(int arr[],int n)
{
     int maxsum=INT_MIN;
     int sum=0;
     
     for(int i=0;i<n;i++)
     {
        sum+=arr[i];
        
        if(sum>maxsum)
        {
           maxsum=sum;  
        }
        
        if(sum<0)
        {
          sum=0;   
        }
        
     }
     
   return maxsum;
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
