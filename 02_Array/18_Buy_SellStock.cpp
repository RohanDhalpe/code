#include <iostream>
#include<climits>

using namespace std;

int maxProfit(int prices[],int n)
{
     int minprice=INT_MAX;
     int maxprofit=0;
     
     for(int i=0;i<n;i++)
     { 
          if(prices[i]<minprice){
             minprice=prices[i];
          }
          
          if((prices[i]-minprice)>maxprofit)
          {
            maxprofit=prices[i]-minprice;
          }
          
     }
  return maxprofit;
}

int main() {
    int prices[] = {7,1,5,3,6,4};
    int n = sizeof(prices) / sizeof(prices[0]);
    
    int maxPro = maxProfit(prices,n);
    cout << "Max profit is: " << maxPro << endl;
}
