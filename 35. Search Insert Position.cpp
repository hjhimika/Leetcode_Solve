class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        for (int i=0; i< nums.size(); i++){
            if (target == nums[i]) return i;
        }
        nums.push_back(target);
        sort(nums.begin(), nums.end());
        for (int i=0; i< nums.size(); i++){
            if (target == nums[i]) return i;
        }
        return 0;
    }
};
