#include <iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high)
{    vector<int>temp;
     int left=low;
     int right=mid+1;
     
     while(left<=mid  && right<=high)
     {
          if(arr[left]<=arr[right]){
               temp.push_back(arr[left]);
               left++;
          }else{
              temp.push_back(arr[right]);
              right++;
          }
     }
     
     while(left<=mid){
            temp.push_back(arr[left]);
               left++;
     }
     while(right<=high){
          temp.push_back(arr[right]);
              right++;
     }
     
     for(int i=low;i<=right;i++){
          arr[i]=temp[i-low];
     }
     
}

void ms(vector<int> &arr,int low,int high){
     if(low>=high){
          return ;
     }
     int mid=(low+high)/2;
     
     ms(arr,low,mid);
     ms(arr,mid+1,high);
     merge(arr,low,mid,high);
}

int main() {

    int arr[] ={4,9,7,3,5,6};
    int n = 6;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    
    ms(arr, 0, n - 1);
    
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}