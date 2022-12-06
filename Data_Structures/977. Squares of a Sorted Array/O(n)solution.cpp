class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = nums.size(), j = -1, i;
        vector <int> v;
        for(i=0; i<l; i++)
        {
            if(nums[i]>=0)
            {
                j = i-1;
                break;
            }
        }
        // int j = v.size()-1;
        // cout << i << " " << j << "\n";
        if(j==-1 && i != 0) j = l-1;
        while(i<l && j>=0)
        {
            if(nums[i] <= -nums[j])
            {
                v.push_back(nums[i]*nums[i]);
                i++;
            }
            else{
                v.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        while(i<l)
        {
            v.push_back(nums[i]*nums[i]);
            i++;
        }
        while(j>=0)
        {                
            v.push_back(nums[j]*nums[j]);
            j--;
        }
        // sort(nums.begin(), nums.end());

        return v;
    }
};
