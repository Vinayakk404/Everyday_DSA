class Solution {
public:
    
  
    
    bool isPalindrome(string nums) {
        int n=nums.length();
        int low=0;
        int high=n-1;
        while(low<=high)
       {
            if(isalnum(nums[low]) and isalnum(nums[high]))
            {
                if(tolower(nums[low])!=tolower(nums[high]))
                {
                    return false;
                }
                low++;high--;
            }
            else
            {
                if(isalnum(nums[low])==false)
                {
                    low++;
                }
                if(isalnum(nums[high])==false)
                {
                    high--;
                }
                
            }
           
       }
        
       return true;
        
        
    }
};