#include<iostream>
#include<climits>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }else{
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[]={2,3,5,7,11,13};

    int n=sizeof(arr)/sizeof(0);
    
   cout<<isSorted(arr,n)<<endl;
    
    return 0;
}
