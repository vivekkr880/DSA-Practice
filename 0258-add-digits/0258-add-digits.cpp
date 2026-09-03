// class Solution {
// public:
//     int addDigits(int num) {
//         int sum=0;
//         while(num>0)
//         {
//             int digits=num%10;
//             sum+=digits;
//         }
//         return sum;        
//     }
// };
class Solution {
public:
    int addDigits(int num) {
        while(num >= 10) {
            int sum = 0;

            while(num > 0) {
                int digit = num % 10;
                sum += digit;
                num = num / 10;
            }

            num = sum;
        }

        return num;
    }
};