class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto a = find(nums.begin(),nums.end(),target);
        int index = -1;
        if(a != nums.end()){
            index = (a - nums.begin());
        }
        return index;
    }
};