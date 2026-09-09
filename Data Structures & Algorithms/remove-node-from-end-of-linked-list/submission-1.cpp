class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        int len = 0;
        ListNode* tem = head;
        while(tem){
            len++;
            tem = tem->next;
        }
        int position = len - n;
        if(position==0) return head->next;
        ListNode* temp = head;
        for(int i = 0;i<position-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
