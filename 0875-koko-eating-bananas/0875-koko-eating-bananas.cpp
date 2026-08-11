class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int left = 1;
        int right = *max_element(p.begin(), p.end());
        int ans = right;

        while (left <= right) {
            int mid = right - (right - left) / 2;
            int hours = 0;

            for (int x : p) {
                hours += (x + mid - 1) / mid;
            }

            if (hours <= h) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};