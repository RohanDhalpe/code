#include<iostream>
using namespace std;

 int find_Sqrt(int n)
 {
    int low=1;
    int high=n;

    while(low<=high)
    {
        int mid=(low+high)/2;
        
        int val=mid*mid;
        
        if(val<=n){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return high;
 }
 
int main()
{  
    int n=81;
    cout<<find_Sqrt(n)<<endl;
    
   return 0;
}