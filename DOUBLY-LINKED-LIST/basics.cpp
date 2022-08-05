#include <iostream>
using namespace std;

class node // structure of node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val) // constructor for constructing new node
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(node *&head, int val)  
{
    node *temp = new node(val);  // new node ban jaega
    if (head==NULL)
    {
        head=temp;
        return;
    }
    
    temp->next = head;
    head->prev=temp;
    head = temp;
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

int main(){

    node* head=NULL;
    print(head);
    insertAtHead(head, 1);
    print(head);
    insertAtHead(head, 3);
    print(head);
    cout << head->data;


    return 0;
}