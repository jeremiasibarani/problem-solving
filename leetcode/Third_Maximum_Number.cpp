class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> table;
        for(auto item : nums){
            table.insert(item);
        }
        if(table.size() >= 3){
            int i = 0;
            for(auto rev = table.rbegin(); rev != table.rend(); rev++){
                i++;
                if(i == 3){
                    return *rev;
                }
            }
        }
        
        return *table.rbegin();
    }
};
