#include <iostream>
#include <math.h>
#include <string>
class Solution {
public:
    int findNthDigit(int n) {
        n -= 1;
        for (long d = 1; d < 11; ++d) {
            int num = pow(10, d - 1);
            if (n < 9 * num * d) {
                return int(to_string(num + n / d)[n % d]) - '0';
            }
            n -= 9 * num * d;
        }
        return 0;
    }
};

