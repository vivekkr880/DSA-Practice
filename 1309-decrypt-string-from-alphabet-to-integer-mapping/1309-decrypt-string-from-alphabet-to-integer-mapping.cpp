class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            if (i + 2 < s.length() && s[i + 2] == '#') {
                int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
                ans += 'a' + num - 1;
                i += 2;
            }
            else {
                int num = s[i] - '0';
                ans += 'a' + num - 1;
            }
        }

        return ans;
    }
};