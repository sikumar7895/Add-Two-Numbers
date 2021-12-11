class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p=l1;
        ListNode *q=l2;
        ListNode *t1=NULL;
        ListNode *t2=NULL;
        int c=0;
        while(p!=NULL&&q!=NULL)
        {
            int x=(p->val + q->val +c)%10;
            c=(p->val + q->val +c)/10;
            p->val=x;
            q->val=x;
            t1=p;
            t2=q;
            q=q->next;
            p=p->next;
        }
        if(q==NULL)
        {
            while(p)
            {
                int x=(p->val + c)%10;
                c= (p->val + c)/10;
                p->val=x;
                t1=p;
                p=p->next;
            }
            if(c!=0)
            {
                ListNode *t=new ListNode(c);
                t1->next=t;
            }
            return l1;
        }
        else
        {
            while(q)
            {
                int x=(q->val + c)%10;
                c= (q->val + c)/10;
                q->val=x;
                t2=q;
                q=q->next;
            }
            if(c!=0)
            {
                ListNode *t=new ListNode(c);
                t2->next=t;
            }
            return l2;
        }
        //return head;
        
    }
};
