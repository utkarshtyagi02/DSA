class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0,
         sum = 0,
         p = 1;

        while (n > 0) {
            int a = n % 10;
            if (a != 0) {
                x = a * p + x;
                p *= 10;
                sum += a;
            }
            n /= 10;
        }

        return x * sum;
    }
};