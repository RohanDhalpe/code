#include<iostream>
#include<vector>
using namespace std;

int partionIndex(vector<int> &arr,int low,int high)
{    
     int i=low;
     int j=high;
     int pIndex=arr[low];

      while(i<j)
      {
          while(arr[i]<=pIndex && i<=high-1){
               i++;
          }
          while(arr[j]>=pIndex && j>=low+1){
               j--;
          }
          
          if(i<j){
               swap(arr[i],arr[j]);
          }    
      }

     swap(arr[low],arr[j]);
     return j;
}

void qS(vector<int> &arr,int low,int high){
     if(low<high)
     {
          int pivot=partionIndex(arr,low,high);
          qS(arr,low,pivot-1);
          qS(arr,pivot+1,high);
     }    
}

vector<int>quicksort(vector<int> &arr){
     qS(arr,0,arr.size()-1);
     return arr;
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = quicksort(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
