class Solution {
public:
    int convertTime(string current, string correct) {

        int curHour = stoi(current.substr(0, 2));
        int curMin = stoi(current.substr(3, 2));

        int corHour = stoi(correct.substr(0, 2));
        int corMin = stoi(correct.substr(3, 2));

        int currentTime = curHour * 60 + curMin;
        int correctTime = corHour * 60 + corMin;

        int diff = correctTime - currentTime;

        int ans = 0;

        ans += diff / 60;
        diff %= 60;

        ans += diff / 15;
        diff %= 15;

        ans += diff / 5;
        diff %= 5;

        ans += diff;   // remaining 1-minute operations

        return ans;
    }
};