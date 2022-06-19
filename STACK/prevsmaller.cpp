// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
    stack<int>s1;
    vector <int>arr;
    
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            arr.push_back(-1);
        }
        else
        {
            s1.push(a[i-1]);
            while(!s1.empty() and s1.top()>=a[i])
            {
                s1.pop();
            }
            if(s1.empty())
            {
                arr.push_back(-1);
            }
            else
            {
                
                arr.push_back(s1.top());
            }
        }
    }
  
    return arr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends