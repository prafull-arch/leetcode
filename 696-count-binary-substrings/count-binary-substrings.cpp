class Solution {
public:
    int countBinarySubstrings(string s) {
        int result = 0;
        int i = 0;
        while (i < s.length()) {
            int num0 = 0;
            int num1 = 0;
            if (s[i] == '0') {
                while (s[i] != '1' && i < s.length()) {
                    num0++;
                    i++;
                }
                int j = i;
                while (s[j] != '0' && j < s.length()) {
                    num1 += 1;
                    j++;
                }
                result += min(num0, num1);

            } else {
                while (s[i] != '0' && i < s.length()) {
                    num1++;
                    i++;
                }
                int j = i;
                while (s[j] != '1' && j < s.length()) {
                    num0 += 1;
                    j++;
                }
                result += min(num0, num1);
            }
        }
        return result;
    }
};