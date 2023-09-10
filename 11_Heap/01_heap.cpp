#include<iostream>
using namespace std;

class heap{
   
   public:
   int arr[100];
   int size;

    heap(){
        arr[0]=-1;
        int size=0;
    }
      
    void printheap(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }

    void insert(int val)
    {
        size++;
        int i=size;
        arr[i]=val;

        while(i>1)
        {
            int parent=i/2;

            if(arr[parent]<arr[i])
            {
                swap(arr[i],arr[parent]);
                i=parent;
            }
            else{
                return;
            }
        }
    }

    void deletefromheap()
    {
        if(size==0){
            cout<<"No for delete";
            return;
        }
        
        arr[1]=arr[size];
        size--;
        
        int i=1;
        while(i<size)
        {
          int leftindex=2*i;
          int rightindex=2*i+1;
          
          if(leftindex < size && arr[i] < arr[leftindex]){
               swap(arr[i],arr[leftindex]);
               i=leftindex;
          }
          else if(rightindex < size && arr[i] < arr[rightindex]){
               swap(arr[i],arr[rightindex]);
               i=rightindex;
          }else{
            return;
          }
        }
    }
};

void heapify(int arr[],int n,int i ){
        int largest=i;

        int left=2*i;
        int right=2*i+1;

        if(left < n && arr[largest] < arr[left]){
                i=left;
        }
        if(right < n && arr[largest] < arr[right]){
               i=right;
        }

        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
}

void heapsort(int arr[],int n){
     int size=n;

     while(size>1){
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
     }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(65);
    h.insert(45);
    h.insert(35);
    h.insert(25);
    h.printheap();

    int arr[6]={-1,10,5,7,17,3};
    int n=5;

    for(int i=n/2; i>0; i--){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}