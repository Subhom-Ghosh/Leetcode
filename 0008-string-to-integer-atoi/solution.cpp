class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        int sign = 1;
        long result = 0; // Use long to catch overflow before casting

        // 1. Skip whitespaces
        while (i < n && s[i] == ' ') i++;

        // 2. Check for sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Parse digits with safe overflow check
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        return static_cast<int>(sign * result);
    }
};

