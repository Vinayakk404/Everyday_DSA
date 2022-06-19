//next grater element 
// I ws gettnig segmentation fault because i was  doing  arr[i]>s1.top() before s1.empty()==false 
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
    stack<long long>s1;
    vector<long long>v1;
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            v1.push_back(-1);
        }
        else
        {
            s1.push(arr[i+1]);
            while(s1.empty()==false and arr[i]>s1.top() )
            {
                s1.pop();
            }
            if(s1.empty())
            {
                v1.push_back(-1);
            }
            else
            {
                v1.push_back(s1.top());
            }
        }
    }
   
    reverse(v1.begin(),v1.end());
    return v1;
        
    }
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends