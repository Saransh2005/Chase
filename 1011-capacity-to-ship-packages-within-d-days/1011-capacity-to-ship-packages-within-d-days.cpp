class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
        int left = *max_element(w.begin(),w.end());
        int right = accumulate(w.begin(),w.end(),0);
        int ans = right;

        while(left<=right){
            int mid = right - (right - left)/2;

            int dayused = 0;
            int sum = 0;
            for(int x : w){
                if(sum + x > mid){
                    dayused++;
                    sum = x;
                }
                else{
                    sum+=x;
                }
            }

            if(dayused < days){
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