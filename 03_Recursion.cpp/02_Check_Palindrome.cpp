#include<iostream>
using namespace std;

bool checkPalindrome(string &str,int i)
{
   
    
    if(i>=str.length()/2){
        return true;
    }
    
    if(str[i]!=str[str.length()-1-i]){
        return false;
    }
    
    checkPalindrome(str,i+1);
}
int main(){
   
   string str="MADAM";
   
   cout<<checkPalindrome(str,0);
   
    return 0;
}