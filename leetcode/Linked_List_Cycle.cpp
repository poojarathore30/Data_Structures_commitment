// Problem statement : Detect is Loop exist in Linkedlist and return the Pointer to the node causing Loop                   
// 1->2->3->4->5->6
//    ^           |
//    |___________|

     map<ListNode*,bool> visited;
    ListNode* check(ListNode* head)
    {
        if(head==NULL) return NULL;
         visited[head]=true;
        if(head->next==NULL) return NULL;
         if(visited[head->next]==false) return check(head->next);
         else return head->next;  
        
    }
    ListNode *detectCycle(ListNode *head) {
    return check(head);
    }
