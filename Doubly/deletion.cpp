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

void delete_first(node* &head)
{
    node* temp = head;
    head = head->next;
    delete temp;
    head->pre = NULL;
}

void delete_last(node* &head)
{
    node* temp1 = head;
    node* temp2 = head->next;
    while (temp2->next!=NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    temp1->next = NULL;
    delete temp2;
}

int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();
    node* fifth = new node();
    node* sixth = new node();
    node* seventh = new node();

    head->data = 56;
    head->next = second;
    head->pre = NULL;

    second->data = 25;
    second->next = third;
    second->pre = head; 

    third->data = 3;
    third->next = fourth;
    third->pre = second; 

    fourth->data = -14;
    fourth->next = fifth;
    fourth->pre = third;
    
    fifth->data = 34;
    fifth->next = sixth;
    fifth->pre = fourth;

    sixth->data = -79;
    sixth->next = seventh;
    sixth->pre = fifth;

    seventh->data = 11;
    seventh->next = NULL;
    seventh->pre = sixth;

    delete_first(head);
    delete_last(head);
    traversal(head);
    return 0;
}