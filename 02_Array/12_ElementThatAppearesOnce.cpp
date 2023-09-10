#include <iostream>
#include <vector>

using namespace std;

int ElementThatAppearesOnce(int arr[],int n){
    int xor1=0;
    for(int i=0;i<n;i++)
    {
       xor1=xor1^arr[i];
    }
  return xor1;
}



int main()
{
   int arr[] = {4, 1, 2, 1, 2};
   
   int n=sizeof(arr)/sizeof(arr[0]);

   cout<<ElementThatAppearesOnce(arr,n);

   
  return 0;
}