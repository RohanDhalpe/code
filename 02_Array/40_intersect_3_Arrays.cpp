/*
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i = 0;
            int j = 0;
            int k = 0;
            vector<int>ans;
            
            while(i<n1 && j<n2 && k<n3)
            {
                
                if(A[i]<=B[j] && A[i]<C[k] )
                {
                 i++;   
                }
                else if(A[i]>B[j] && B[j]<=C[k] )
                {
                 j++;   
                }
               else if(C[k]<B[j] && A[i]>=C[k] )
                {
                    k++;
                }
                else if( A[i]==B[j] && B[j]==C[k] )
               {
                   if(ans.size() != 0 && ans.back() == A[i])
                   {
                        i++;
                        j++;
                        k++;
                        continue;
                   }
                    ans.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
            }
            if(ans.size()==0)return {};
            return ans;
        }
*/