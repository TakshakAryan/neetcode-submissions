/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* merge(ListNode* first,ListNode* second){
        if(!first) return second;
        if(!second) return first;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(first && second){
            if(first->val <= second->val){
                temp->next = first;
                first = first->next;
            }else{
                temp ->next = second;
                second = second->next;
            }
            temp = temp->next;
        }
        if(first){
            temp->next = first;
        }else{
            temp->next = second;
        }
        return dummy->next;
    }
    ListNode* solve(vector<ListNode*>& lists,int start,int end){
        if(start==end) return lists[start];
        if(start>end)  return NULL;
        int mid = start + (end-start)/2;
        ListNode* left = solve(lists,start,mid);
        ListNode* right = solve(lists,mid+1,end);
        return merge(left,right);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        return solve(lists,0,lists.size()-1);
    }
};
