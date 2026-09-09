class Solution {
public:
    void solve(ListNode*& head,ListNode*curr,ListNode* prev){
        if(curr==NULL){
            head = prev;
            return;
        }
        ListNode* forward = curr->next;
        solve(head,forward,curr);
        curr->next = prev;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        solve(head,curr,prev);
        return head;
    }
};
