#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
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
        cout << "Memory is free for node and data: " << value << endl;
    }
};
void insertNode(Node *&tail, int element, int d)
{
    // if list is empty
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        // assumung the list is not empty
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *&tail)
{

    Node *temp = tail;

    if (tail == NULL)
    {
        cout << "List is Empty, Please check" << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "List is Empty , please check again" << endl;
        return;
    }
    else
    {
        // non empty linked list
        //  assuming the value is preasent in the link list
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if (curr == prev)
        {
            tail == NULL;
        }
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 2);
    print(tail);
    insertNode(tail, 2, 5);
    print(tail);
    insertNode(tail, 5, 9);
    print(tail);
    insertNode(tail, 9, 8);
    print(tail);
    insertNode(tail, 2, 3);
    print(tail);
    deleteNode(tail,9);
    print(tail);
    return 0;
}