class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(nums.begin(),nums.end());
        int ans = right;

        while(left<=right){
            int mid = right - (right-left)/2;

            int th = 0;
            for(int x : nums){
                th += ceil((double)x/mid);
            }
            if(th <= threshold){
                ans = mid;
                right = mid -1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
};