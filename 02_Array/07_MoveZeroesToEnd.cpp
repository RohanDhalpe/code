#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int i = 0;
    for (int j = 0; j < n; j++) { 
        if (arr[j] != 0) {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

int main() {
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    
    moveZeroes(arr, n);
    
    for (auto it : arr) {
        cout << it << " ";
    }
    
    cout << '\n';
    
    return 0;
}
