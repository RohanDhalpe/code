#include <iostream>
#include <vector>

using namespace std;

int MissingNumber(int arr[],int n){
    int xor1=0;
    int xor2=0;
    
    for(int i=0;i<n-1;i++)
    {
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;

    return xor1^xor2;
}

int main()
{

 int arr[]= {1,2,3,4,5,7,8,9,10};
 int n=10;
 cout<<MissingNumber(arr,n);

  return 0;
}