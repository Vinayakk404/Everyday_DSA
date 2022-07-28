class Solution{
    public:
 
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int>p1;
        
      //  int n=sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<k;i++)
        {
         p1.push(arr[i]) ;  
        }
        for(int i=k;i<r+1;i++)
        {
            if(p1.top()>arr[i])
            {
                p1.pop();
                p1.push(arr[i]);
            }
        }
        return p1.top();
    }
};