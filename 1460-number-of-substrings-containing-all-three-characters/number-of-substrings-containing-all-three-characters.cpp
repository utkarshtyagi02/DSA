class Solution {
public:
    int numberOfSubstrings(string s) {
        int l = 0 , r = 0 , end = s.size() - 1;
        unordered_map<char,int> map;
        
        int count = 0;
        
        while(r != s.size())
        {
            map[s[r]] += 1; 
            
            while(map['a'] and map['b'] and map['c'])
            {
                count += 1 + (end - r);
            
                map[s[l]] -= 1; //iske bina time limit exceed ho rahi thi 
                l++;
            }
            r++;
        }
        return count;
    }
};