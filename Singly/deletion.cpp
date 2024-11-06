#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void traversal(node* ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << "\tNext Node :\t" << ptr->next << endl;
        ptr = ptr->next;
    }
    cout << endl;
}

void delete_first(node* &ptr)
{
    node* p = ptr;
    ptr = ptr->next;
    delete p;
}

void delete_last(node* &ptr)
{
    node* p = ptr;
    node* q = ptr->next;
    while (q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    delete q;
}

void delete_bet(node* &ptr, int index)
{
    node* p = ptr;
    node* q;
    int i = 0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    q = p->next;
    p->next = q->next;
    delete q;
}

int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();
    node* fifth = new node();
    node* sixth = new node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = sixth;
    sixth->data = 6;
    sixth->next = NULL;

    traversal(head);
    delete_first(head);
    delete_last(head);
    delete_bet(head, 1);
    traversal(head);
    return 0;
}