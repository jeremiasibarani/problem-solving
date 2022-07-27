class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int idxer = 0;
        sort(nums.begin(), nums.end());
        for(auto item : nums){
            if(item != idxer)return idxer;
            idxer++;
        }
        
        return idxer;
    }
};
