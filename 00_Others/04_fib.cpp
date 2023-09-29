

#include <iostream>

using namespace std;

void fibonacci(int num){
     int n1=0;
     int n2=1;
     int next;
     
     for(int i=0;i<=num;i++){
          cout<<n1<<" ";
          next=n1+n2;
          n1=n2;
          n2=next;
     }
}

int main()
{
    
   int num=10;
   fibonacci(num);
    return 0;
}
