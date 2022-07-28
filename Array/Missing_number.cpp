nt MissingNumber(vector<int>& array, int n) {
       // Your code goes here
       sort(array.begin(),array.end());
       int j = 1;
       for(int i=0;i<n;i++)
       {
           if(array[i] != j)
           {
               return j;
           }
           j++;
       }}

       //using bitmasking
       class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        int i=0;
        
        for(int num:nums){
            result ^= num;
            result ^= i;
            i++;
        }
        
        return result;
    }
};