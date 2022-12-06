/*
Idea: 
Let the array be - 123456789 and k = 4

Step 1 - 12345 6789 ---> 54321 6789

Step 2 - 54321 6789 ---> 54321 9876

Step 3 - 543219876 ---> 678912345
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        k %= l;
        int x = l-k;
        
            
        for(int i=0; i<x/2; i++)
        {
            nums[i] = nums[i] + nums[x-i-1];
            nums[x-i-1] = nums[i] - nums[x-i-1];
            nums[i] = nums[i] - nums[x-i-1];
        }
        // x = (x+l)/2;
        for(int i=x; i<(x+l)/2; i++)
        {
            nums[i] = nums[i] + nums[x+l-i-1];
            nums[x+l-i-1] = nums[i] - nums[x+l-i-1];
            nums[i] = nums[i] - nums[x+l-i-1];
        }
        for(int i=0; i<l/2; i++)
        {
            nums[i] = nums[i] + nums[l-i-1];
            nums[l-i-1] = nums[i] - nums[l-i-1];
            nums[i] = nums[i] - nums[l-i-1];
        }
    }
};
