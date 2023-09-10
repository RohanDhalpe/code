#include<iostream>
#include<math.h>
using namespace std;

int main()
{  
    int n;
    cin>>n;
    
    int res=0;
    int i=0;
    while(n!=0){
      int digit=n%10;
      res+=digit*pow(2,i);
      i++;
      n=n/10;
    }

    cout<< "ans is "<<res;
    return 0;
}