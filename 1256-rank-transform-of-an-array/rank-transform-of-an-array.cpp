class Solution {
public:
       vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> A(arr);
        sort(A.begin(), A.end());
        unordered_map<int, int> r;
        for (int& a : A)
            r.emplace(a, r.size() + 1);
        for (int i = 0; i < A.size(); ++i)
            A[i] = r[arr[i]];
        return A;
    }
};