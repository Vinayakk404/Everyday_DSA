class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int key) {
     int low=0;
     int high=nums.size()-1;
     vector<int>v1;
        int res=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==key)
            {
              res=mid;
                high=mid-1;
            }
            else if(nums[mid]<key)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        v1.push_back(res);
        res=-1;
        low=0;
        high=nums.size()-1;
         while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==key)
            {
              res=mid;
                low=mid+1;
            }
            else if(nums[mid]<key)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        v1.push_back(res);
        
        
      
        return v1;
    }
};