class Solution {
public:
    int myAtoi(string s) {
        return recursiveAtoi(s, 0, 1);
    }

private:
    int recursiveAtoi(const string& s, int idx, int sign) {
        if (idx >= s.length())
            return 0;

        char c = s[idx];
        if (c == ' ')
            return recursiveAtoi(s, idx + 1, sign);
        else if (c == '-' || c == '+') {
            // Check if there are consecutive '+' or '-' signs
            if (idx + 1 < s.length() && (isdigit(s[idx+1]) == false))
                return 0; // Invalid input
            return recursiveAtoi(s, idx + 1, (c == '-') ? -1 : 1);
        }
        else if (isdigit(c)) {
            long long num = 0;
            while (idx < s.length() && isdigit(s[idx])) {
                num = num * 10 + (s[idx] - '0');
                if (num > INT_MAX)
                    return (sign == 1) ? INT_MAX : INT_MIN;
                idx++;
            }
            return sign * num;
        } else {
            return 0; // Non-digit character encountered
        }
    }
};