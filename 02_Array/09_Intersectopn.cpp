#include <iostream>
#include <vector>

using namespace std;

void FindIntersection(int arr1[], int arr2[], int n, int m)
{
  int i = 0, j = 0;
  
  while (i < n && j < m)
  { 
     if(arr1[i]<arr2[j]){
        i++;
     }else if(arr2[i]<arr1[j]){
        j++;
     }else{
        cout<<arr1[i]<<" ";
        i++;
        j++;
     }
    
  }

}

int main()
{
  int n = 9, m = 6;

  int arr1[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {1, 3, 4, 5, 11, 12};
  FindIntersection(arr1,arr2,n,m);

  return 0;
}