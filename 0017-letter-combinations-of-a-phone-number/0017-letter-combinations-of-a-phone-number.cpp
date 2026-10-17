class Solution {
public:
    string mapping[10] = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    vector<string> ans;

    void solve(string digits, int index, string current) {
        if (index == digits.length()) {
            ans.push_back(current);
            return;
        }

        int digit = digits[index] - '0';
        string letters = mapping[digit];

        for (int i = 0; i < letters.length(); i++) {
            current.push_back(letters[i]);

            solve(digits, index + 1, current);

            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return ans;
        }

        solve(digits, 0, "");

        return ans;
    }
};
