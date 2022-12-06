class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        int l = nums.size();
        map<int, int> u;

        for(int i=0; i<l; i++)
        {
            if(u.find(target-nums[i]) == u.end())             
                u[nums[i]] = i;
            else{
                v.push_back(i);
                v.push_back(u[target-nums[i]]);
                break;
            }
        }
 
        return v;
    }
};
