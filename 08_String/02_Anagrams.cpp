/*
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
       vector<int>temp(26,0);
       if(a.size()!=b.size()){
           return false;
       }
       
       for(int i=0;i<a.size();i++){
           temp[a[i]-'a']++;
           temp[b[i]-'a']--;
       }
       
       for(int i=0;i<temp.size();i++){
           if(temp[i]!=0){
               return false;
           }
       }
       return true;
    }

};
*/