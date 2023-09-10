#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void immediateSmaller(vector<int>&arr) {
	    int n=arr.size();
		
	    
	    for(int i=0;i<n-1;i++)
	    {  
	        if(arr[i]<arr[i+1]){
				arr[i]=-1;
			}else{
				arr[i]=arr[i+1];
			}
		}
		arr[n-1]=-1;
	}

    int main(){
        vector<int> arr={4,0,6,7,3,1,-9};
        immediateSmaller(arr);
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    }