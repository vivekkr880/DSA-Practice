class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        
        string vowels = "aeiou";
        
        for (int i = left; i <= right; i++) {
            char first = words[i][0];
            char last = words[i][words[i].size() - 1];
            
            if (vowels.find(first) != string::npos &&
                vowels.find(last) != string::npos) {
                count++;
            }
        }
        
        return count;
    }
};