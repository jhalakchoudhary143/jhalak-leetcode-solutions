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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* currl1=l1;
        ListNode* currl2=l2;
         ListNode* head=NULL;
          ListNode* last=NULL;
        int carry=0;
        while(currl1!=NULL || currl2!=NULL||carry!=0){
            int sum=carry;
    if(currl1!=NULL)
    {
    sum+=currl1->val;
    currl1=currl1->next;
    }
    if(currl2!=NULL)
    {
    sum+=currl2->val;
    currl2=currl2->next;
    }
    if(sum>=0)
    {
        carry=sum/10;
        sum=sum%10;
    }
    ListNode *newnode=new ListNode(sum);
    if(head==NULL)
    {
        head=newnode;
        last=newnode;
    }else
    {
        last->next=newnode;
        last=last->next;
    }
    }
    return head;
    }
};