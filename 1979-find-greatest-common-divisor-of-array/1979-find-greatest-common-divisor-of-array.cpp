class Solution {
public:
    int findGCD(vector<int>& nums) {
        int m = *max_element(nums.begin(),nums.end());
        int n = *min_element(nums.begin(),nums.end());
        int ans = 0;
        for(int i=1;i<=n;i++){
            if(( m%i ==0) && (n%i == 0)){
                ans = i;
            }
        }
        return ans;
    }
};