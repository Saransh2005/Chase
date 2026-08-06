class Solution {
public:
    int lower(vector<int>&nums , int target){
        int left = 0;
        int right = nums.size()-1;
        int index = -1;

        while(left<=right){
            int mid = right - (right-left)/2;

            if(nums[mid] == target){
                index = mid;
                right = mid -1;
            }

            else if(target > nums[mid]){
                left = mid +1;
            }
            else{
                right = mid -1;
            }
        }
        return index;
    }

    int upper(vector<int>&nums , int target){
        int left = 0;
        int right = nums.size()-1;
        int index = -1;

        while(left<=right){
            int mid = right - (right-left)/2;

            if(nums[mid] == target){
                index = mid;
                left = mid + 1;
            }

            else if(target > nums[mid]){
                left = mid +1;
            }
            else{
                right = mid -1;
            }
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {lower(nums,target),upper(nums,target)};    
    }
};