#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


Node* takeInput()
{
    Node* head = NULL;
    Node* tail = NULL;

    int data;
    cin>>data;

    while(data != -1)
    {
        Node* newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

/*

    // Iterative Approach
    TC - N
    SC - 1


Node* reverseLL(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

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

    // Recursive Approach
    TC - N
    SC - N ( recursive Stack )


Node* reverseLL(Node* head)
{
    // Base Case
    if(head == NULL) return head;
    if(head->next == NULL) return head;

    Node* newNode = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;
    return newNode;
}

*/