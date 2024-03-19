class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        
        // Step 1: Ignore leading whitespaces
        while (i < n && s[i] == ' ')
            i++;
        
        // Step 2: Check for sign
        int sign = 1;
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        // Step 3: Read digits
        long long result = 0;
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            if (result > INT_MAX)
                return (sign == 1) ? INT_MAX : INT_MIN;
            i++;
        }
        
        // Step 4: Apply sign
        return sign * result;
    }
};
