void sol(vector<string>&vec,vector<vector<int>> &m,int n,int i,int j,string s)
    {
        if(i<0||j<0||i>=n||j>=n||m[i][j]<=0)
        return;
        if(i==n-1&&j==n-1)
        {
            vec.push_back(s);
            return ;
        }
        
        m[i][j]=-1;
        
        sol(vec,m,n,i+1,j,s+"D");
        
        sol(vec,m,n,i,j+1,s+"R");
        
        sol(vec,m,n,i-1,j,s+"U");
        
        sol(vec,m,n,i,j-1,s+"L");
        
        m[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>vec;
        if (m[0][0]==0)
        return {};
        // string s="";
        sol(vec,m,n,0,0,"");
        return vec;
    }