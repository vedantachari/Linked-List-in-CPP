#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    node* pre;
};

void traversal(node* &head)
{
    node* p = head;
    while (p!=NULL)
    {
        cout << "Element : " << p->data << "  Next Node : " << p->next << "  Previous Node :" << p->pre << endl;
        p = p->next;
    }
}

int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();
    
    head->data = 1;
    head->next = second;
    head->pre = NULL;

    second->data = 2;
    second->next = third;
    second->pre = head; 

    third->data = 3;
    third->next = fourth;
    third->pre = second; 

    fourth->data = 4;
    fourth->next = NULL;
    fourth->pre = third;

    traversal(head);

    return 0;
}