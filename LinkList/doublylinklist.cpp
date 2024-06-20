#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data: " << value << endl;
    }
};
// inseart at head
void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
// inseart at tail
void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {

        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert at a position
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{ // insert at start
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at last

    if (temp->next == NULL)
    {

        insertAtTail(tail, head, d);
        return;
    }
    // insert at mid
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{
        Node* curr= head;
        Node* previ = NULL;
        int cnt  =1;
        while(cnt<position){
            previ =curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        previ->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
// print the node
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// length of the node
int getLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    // cout << getLength(head);

    insertAtHead(head, tail, 12);
    print(head);
    insertAtHead(head, tail, 13);
    print(head);

    insertAtTail(tail, head, 15);
    print(head);
    insertAtTail(tail, head, 16);
    print(head);
    insertAtPosition(head, tail, 3, 102);
    print(head);
    insertAtPosition(head, tail, 1, 103);
    print(head);
    insertAtPosition(head, tail, 7, 104);
    print(head);

    deleteNode(head,5);
    print(head);
    return 0;
}