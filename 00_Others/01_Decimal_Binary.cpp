#include<iostream>
#include<math.h>
using namespace std;

int main()
{  
    int n;
    cin>>n;

    int ans=0;
    int i=0;

    while(n!=0){
        int remainder=n%2;
        ans+=remainder*pow(10,i);;
        i++;
        n=n/2;
    }
    cout<< "binary form is "<<ans<<endl;
   return 0;
}