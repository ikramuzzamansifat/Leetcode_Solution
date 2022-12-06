// Solution in O(n) with extra spaces. 

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        vector <int> v;
        k %= l;
        for(int i=l-k; i<l; i++)
            v.push_back(nums[i]);
        for(int i=0; i<l-k; i++)
            v.push_back(nums[i]);
        
        nums = v;
    }
};
