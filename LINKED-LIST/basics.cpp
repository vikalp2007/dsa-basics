#include <iostream>
using namespace std;

class node  // structure of node
{
public:
    int data;
    node *next;

    node(int val) // constructor for constructing new node
    {
        this->data = val;
        this->next = NULL;
    }

 
};
void insertAtHead(node *&head, int val)  
{
    node *temp = new node(val);  // new node ban jaega
    temp->next = head;
    head = temp;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)  // agra list hi khaali h
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)  // traversing till last node
    {
        temp = temp->next;
    }

    temp->next = n;
}

void InsertAtPosition(node *&head, int val, int pos)
{
    // insert at start
    if (pos == 1)
    {
        insertAtHead(head, val);
        return;
    }

    // insert at middle   // end wala case bhi cover ho jaega isme
    node *temp = head;
    int cnt = 1;
    // traversing till (pos-2)th node
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    node *n = new node(val);

    // creating new node to insert

    n->next = temp->next;
    temp->next = n;
}

void deleteAtHead(node* &head, int val){
    node* toDelete=head;
    head=head->next;
    delete toDelete;
}

void deleteAtPos(node* &head, int val){
    if (head==NULL)  // agar khali h linked list
    {
        return;
    }
    if (head->next==NULL)  // agar sirf ek element h linked list me
    {
        deleteAtHead(head, val);
    }
    
    
    node* temp=head;
    while (temp->next->data!=val) // delete karne wale node k pehle wale node tak traversal
    {
        temp=temp->next;
    }

    node* toDelete=temp->next;
    temp->next=temp->next->next;  // main logic
    delete toDelete;
    
}

void print(node *&head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}

int main()
{
    /*   node* head=new node(0);



        print(head);
        insertAtHead(head, 10);
        print(head);
        Insertion(head, 20, 2);
        print(head);  */
    node *head = NULL;

    print(head);
    insertAtHead(head, 10);
    print(head);
    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 30);
    print(head);
    insertAtHead(head, 40);
    print(head);
    InsertAtPosition(head, 50, 3);
    print(head);
    insertAtTail(head, 100);
    print(head);
    InsertAtPosition(head, 60, 1);
    print(head);
    InsertAtPosition(head, 80, 8);
    print(head);
    deleteAtPos(head, 80);
    print(head);
    deleteAtHead(head, 60);
    print(head);
    cout<< head->data;  // for checking that ki apan ne head ko update kra ya nhi

    return 0;
}