class Solution {
public:
    double average(vector<int>& salary) {
        int l = salary.size(), avg = 0;
        int mx = -100000, mn = 10000000;
        for(int i=0; i<l; i++)
        {
            avg += salary[i];
            if(salary[i] > mx) mx = salary[i];
            if(salary[i] < mn) mn = salary[i];
        }

        avg -= mx + mn;
        return (double)avg / (l-2) ;
    }
};
