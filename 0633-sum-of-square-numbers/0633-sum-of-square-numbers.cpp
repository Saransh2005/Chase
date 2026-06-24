class Solution {
public:
    bool judgeSquareSum(int c) {
        int d = sqrt(c);
        int left = 0;
        int right = d;
        while(left <= right){
            long long sum = (pow(left,2) + pow(right,2));
            if( sum == c){
                return true;
            }
            if(sum > c){
                right--;
            }
            if(sum < c){
                left++;
            }
        }
        return false;
    }
};