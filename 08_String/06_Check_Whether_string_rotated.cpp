/*
class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s==goal) return true;
       
       
        queue<char>q1,q2;
        for(int i=0;i<s.size();i++){
            q1.push(s[i]);
        }
        for(int i=0;i<goal.size();i++){
            q2.push(goal[i]);
        }

        int k=q1.size()-1;

        while(k!=0){
          char f=q1.front();
          q1.push(f);
          q1.pop();
          k--;
          if(q1==q2) return true;
        }
        return false;
    }
};
*/