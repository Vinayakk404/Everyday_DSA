//Simplified approach is BRute force
//OPtimall
class Solution {
public:
    int maxProduct(vector<int>& arr) {
        
        int n=arr.size();
        int ans=arr[0];
        int ma=ans;
        int mi=ans;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<0)
            {
                swap(ma,mi);
            }
           
                ma=max(arr[i],arr[i]*ma);
                mi=min(arr[i],arr[i]*mi);
            ans=max(ans,ma);
        }
        return ans;
    }
};