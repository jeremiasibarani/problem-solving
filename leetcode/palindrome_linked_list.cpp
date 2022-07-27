class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> temp1;
        while(head != nullptr){
            temp1.push_back(head->val);
            head = head->next;
        }
        
        vector<int> temp2 = temp1;
        reverse(temp2.begin(), temp2.end());
        size_t size = temp2.size();
        for(int i = 0; i < size; i++){
            if(temp1[i] != temp2[i])return false;
        }
        
        return true;
    }
};
