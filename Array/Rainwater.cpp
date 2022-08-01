//BRUTE
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int sum=0;int hi;
        
          
        for(int i=1;i<n-1;i++)
        {  
           
            int right_max=height[i];
            int left_max=height[i];
            for(int k=0;k<i;k++)
            {
                right_max=max(right_max,height[k]);
            }
            for(int k=i+1;k<n;k++)
            {
                left_max=max(left_max,height[k]);
            }
           
            hi=min(left_max,right_max);
            sum+=hi-height[i];
            
        }
        return sum;
    }
};


//Optimal Solution
