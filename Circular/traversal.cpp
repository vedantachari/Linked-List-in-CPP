#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void traversal(node* head)
{
    node* p = head;
    cout << "Elements : " << p->data << " Next Node : " << p->next << endl;
    while (p->next != head)
    {
        p = p->next;
        cout << "Elements : " << p->data << " Next Node : " << p->next << endl;
    }
}

int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* last = new node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = last;

    last->data = 4;
    last->next = head;

    traversal(head);
    return 0;
}