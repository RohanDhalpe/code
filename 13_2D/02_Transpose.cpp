#include <iostream>
#include <vector>
using namespace std;
#define N 3

void transpose(vector<vector<int>> &matrix) {

     for(int i=0;i<N;i++){
         for (int j=i+1;j<N;j++){
               swap(matrix[i][j],matrix[j][i]);   
          }
     }

     for(int i = 0; i < N; i++) {
         for (int j = 0; j < N; j++) {
                cout<<matrix[i][j]<<" ";
          }
            cout<<endl;
     }
     cout<<endl;

     for(int i=0;i<N;i++){
          reverse(matrix[i].begin(),matrix[i].end());
     }
     cout<<endl;

     for(int i = 0; i < N; i++) {
         for (int j = 0; j < N; j++) {
                cout<<matrix[i][j]<<" ";
          }
        cout<<endl;
     }
}

int main() {

   vector<vector<int>>matrix = { {4,5,6}, {7,8,9}, {10,11,12}};
   transpose(matrix);
}