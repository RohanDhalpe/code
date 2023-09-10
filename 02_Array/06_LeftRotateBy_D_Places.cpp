#include <iostream>
#include<vector>

using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        
    }
}

void RotateLeftByD(int arr[],int n,int k){

   vector<int>temp(n,0);
   for(int i=0;i<n;i++){
      temp[(i+k)%n]=arr[i];
   }
   
   for(int i=0;i<temp.size();i++){
    arr[i]=temp[i];
   }
}


int main(){
  int k=2;
  int arr[]={1,2,3,4,5,6,7};

 int n=sizeof(arr)/sizeof(arr[0]);
 
 cout<<"Before Rotatng ";
 printArray(arr,n);

 RotateLeftByD(arr,n,k);
 cout<<endl;

 cout<<"After Rotatng ";
 printArray(arr,n);


 return 0;

}