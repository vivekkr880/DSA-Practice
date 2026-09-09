class Solution {
public:
    double average(vector<int>& salary) {
        int sum = 0;
        int minSalary = salary[0];
        int maxSalary = salary[0];

        for(int x : salary) {
            sum += x;
            minSalary = min(minSalary, x);
            maxSalary = max(maxSalary, x);
        }

        sum = sum - minSalary - maxSalary;

        return (double)sum / (salary.size() - 2);
    }
};