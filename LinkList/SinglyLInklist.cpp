#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data" << endl;
    }
};

int insertAtHead(Node *&head, int d)
{
    // create a new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
int insertAtTrail(Node *&tail, int d)
{
    // create a new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node *&head, Node *&trail, int position, int d)
{

    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTrail(trail, d);
        return;
    }
    // create a new node
    Node *insertedNode = new Node(d);
    insertedNode->next = temp->next;
    temp->next = insertedNode;
}
// deletion of the nodedata
void deletionAtPosition(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool isCircularLinkList(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}

int main()
{
    Node *node1 = new Node(10);
    // cout<<node1->data<<"";

    Node *head = node1;
    Node *trail = node1;
    // insert at tail
    insertAtTrail(trail, 12);
    insertAtTrail(trail, 13);
    print(head);
    // // insert at head;
    // cout << endl;
    // insertAtHead(head, 12);
    // insertAtHead(head, 13);
    // print(head);

    // insertAtPosition(head, trail, 6, 17);
    // print(head);
    // cout << "Head data " << head->data << endl;
    // cout << "tail data " << trail->data << endl;

    // // delete at posintion
    // deletionAtPosition(5, head);
    // print(head);
    // cout << "Head data " << head->data << endl;

    // // it print the garvage value;
    // cout << "tail data " << trail->data << endl;
    if(isCircularLinkList(head)){
        cout<< "the linked list is circular"<< endl;
    }
    else {
        cout << "the linked list is not circular"<<endl;
    }
}