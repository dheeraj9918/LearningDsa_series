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
};

int insertAtHead(Node* &head, int d)
{
    // create a new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
int insertAtTrail(Node* &tail, int d)
{
    // create a new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node* &head, Node* &trail,int position, int d)
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

    if(temp->next == NULL){
        insertAtTrail(trail,d);
        return;
    }
    // create a new node
    Node *insertedNode = new Node(d);
    insertedNode->next = temp->next;
    temp->next = insertedNode;
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

int main()
{
    Node *node1 = new Node(10);
    // cout<<node1->data<<"";

    Node *head = node1;
    Node *trail = node1;
    insertAtTrail(trail, 12);
    insertAtTrail(trail, 13);
    print(head);

    cout << endl;
    insertAtHead(head, 12);
    insertAtHead(head, 13);
    print(head);

    insertAtPosition(head,trail, 6, 17);
    print(head);
}