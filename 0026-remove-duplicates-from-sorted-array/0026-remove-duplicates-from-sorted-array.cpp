class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        int a = nums[0];
        ans.push_back(a);
    
        for(int i=0;i<nums.size();i++){
            if(nums[i] != a){
                ans.push_back(nums[i]);
                a = nums[i];
            }        
        }
        nums = ans;
        return ans.size();
    }
};