/*
    // Iterative Solution
    TC - N
    SC - 1

    ListNode* reverseList(ListNode* head) {

        if(head == NULL)
        {
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        while(curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

*/



/*

        // Recursive Solution - I
        TC - N
        SC - N ( recursive stack )

    ListNode* reverse(ListNode* &head, ListNode* curr, ListNode* prev)
    {
        if( curr == NULL)
        {
            head = prev;
            return;
        }
        ListNode* forward = curr->next;
        reverse(head, forward , curr);
        curr->next = forward;

    }

    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        reverse(head, curr, prev);
        return head;

    }

*/



/*

        // Recursive Solution - II
        TC - N
        SC - N ( recursive Stack )


    ListNode* reverse(ListNode* &head)
    {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* chotaHead = reverse(head->next);
        head->next->next = head; 
        head->next = NULL;
        
        return chotaHead;
    }


    ListNode* reverseList(ListNode* head)
    {
        return reverse(head);
    }




*/