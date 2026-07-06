class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int res = 0, left = -1, right = -1;
        sort(intervals.begin(), intervals.end());
        for (auto& x: intervals) {
            if (x[0] > left && x[1] > right) {
                left = x[0];
                ++res;
            }
            right = max(right, x[1]);
        }
        return res;
    }
};