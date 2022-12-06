class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        int l = nums.size();
        for(int i=0; i<l; i++)
        {
            for(int j=i+1; j<l; j++)
            {
                if(nums[i] + nums[j] == target)
                    {
                        v.push_back(i);
                        v.push_back(j);
                        break;
                    }
            }
        }
        return v;
    }
};
