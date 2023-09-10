#include<iostream>

using namespace std;

int RemoveDuplicates(int arr[], int n) {
     int i = 0;
     
     for (int j = 1; j < n; j++) { 
         if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
         }
     }
     
     return i + 1; // Return the new length of the array without duplicates
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]); // Correct way to calculate array size
    
    int k = RemoveDuplicates(arr, n);
    for (int i = 0; i < k; i++) {
         cout << arr[i] << " ";
    }

    return 0;
}
