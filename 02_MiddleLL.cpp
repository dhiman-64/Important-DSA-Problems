/*

        // Find the middle, then Traverse though it.

        TC - N + n/2 = N
        SC - 1

int getLength(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

Node *findMiddle(Node *head) 
{
    int mid = getLength(head);
    int ans = (mid/2) ;
    int count = 0;

    Node* temp = head;
    while(count < ans)
    {
      temp = temp->next;
      count++;
    }
    return temp;
}
*/


/*
    // Optimised Approach 
    Using Slow and Fast Pointer

    Node *findMiddle(Node *head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL)
    {
      fast = fast->next->next;
      slow = slow->next;
    }
    return slow;
}

*/