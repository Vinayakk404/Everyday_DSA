class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0,j=0,k=0;
            vector<int>v1;
            set<int>s;
            while(i<n1 and j<n2 and k<n3)
            {
               
                if(A[i]==B[j] and B[j]==C[k])
                {
                   s.insert(A[i]);
                    i++;j++;k++;
                }
                else if(A[i]<=B[j] and A[i]<=C[k])
                {
                    i++;
                }
                else if(B[j]<=A[i] and B[j]<=C[k])
                {
                    j++;
                }
                else 
                {
                    k++;
                }
            }
            // for(int i=0;i<s.size();i++)
            // {
            //     v1.push_back(s[i]);
            // }
             v1.assign(s.begin(), s.end());
            return v1;
        }
        

};