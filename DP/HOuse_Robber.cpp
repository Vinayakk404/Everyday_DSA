//Recursive
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int recu(vector<int>v1,int n)
{
    if(n>=v1.size())
    {
        return 0;
    }
    return max(v1[n]+recu(v1,n+2),recu(v1,n+1));
    
}
int main() {
    vector<int>v1={2,7,9,3,1};
    
    cout<<recu(v1,0);
}

//DP
class Solution {
public:
    int rob(vector<int>nums) {
    if (nums.size() == 0) return 0;
    int prev1 = 0;
    int prev2 = 0;
    for (int num : nums) {
        int tmp = prev1;
        prev1 = max(prev2 + num, prev1);
        prev2 = tmp;
    }
    return prev1;
}
};

