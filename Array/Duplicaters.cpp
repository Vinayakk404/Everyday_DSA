//using sort  time (M+N)Logn space O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;
    }
};
//using hash Time O(N) Space O(N)
    class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int>m1;
       int n=nums.size();
            for(int i=0;i<n;i++)
            {
                m1[nums[i]]++;
            }
            for(int i=0;i<n;i++)
            {
                if(m1[nums[i]]>1)
                {
                    return true;
                }
            }
            return false;
        }
    };