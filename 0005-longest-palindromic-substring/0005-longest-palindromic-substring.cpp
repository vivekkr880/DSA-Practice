// class Solution {
// public:
//     string longestPalindrome(string s) {
//       string ans="";
//       for(int i=0;i<s.length();i++)
//       {
//         for(int j=i;j<s.length();j++)
//         {
//             string temp=s.substr(i,j-i+1);
//             string rev=temp;
//             reverse(rev.begin(), rev.end());
//             if(temp==rev && temp.length()>ans.length())
//             {
//                 ans = temp;
//             }
//         }
//       }
//       return ans;
//     }
// };
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();

        vector<vector<bool>> dp(n, vector<bool>(n, false));

        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
        }

        for (int len = 2; len <= n; len++) {
            for (int i = 0; i + len <= n; i++) {

                int j = i + len - 1;

                if (s[i] == s[j]) {
                    if (len == 2 || dp[i + 1][j - 1]) {
                        dp[i][j] = true;

                        if (len > maxLen) {
                            start = i;
                            maxLen = len;
                        }
                    }
                }
            }
        }

        return s.substr(start, maxLen);
    }
};