class Solution {
public:
    int countOdds(int low, int high) {
        int x = (high-low)/2;
        if(low%2 || high%2)
            return x+1;
        else 
            return x;
    }
};
