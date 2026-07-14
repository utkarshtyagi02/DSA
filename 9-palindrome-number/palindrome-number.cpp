class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0)return false;
        long long r = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            r = r * 10 + digit;
            temp /= 10;
        }

        if(r == x)
        return true;
        return false;
    }
};