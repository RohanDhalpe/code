/*class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        int count=1;
        
        int prevtime=v[0].first;
        
        for(int i=1;i<n;i++)
        {
           if(v[i].second>prevtime)// The current meeting can be scheduled because
           //                            it starts after the previous one ends
           {
             prevtime=v[i].first;
             count++;
           }
        }
        
       return count; 
    }
};

*/