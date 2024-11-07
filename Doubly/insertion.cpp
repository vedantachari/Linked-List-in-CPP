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

void insert_in_beg(node* &head, int data)
{
    node* new_node = new node();
    new_node->data = data;
    new_node->next = head;
    new_node->pre = NULL;
    head->pre = new_node;
    head = new_node; 
}

void insert_at_last(node* &head, int data)
{
    node* new_node = new node();
    node* temp = head;
    new_node->data = data;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    new_node->pre = temp;
    temp->next = new_node;
    new_node->next = NULL;
}

void insert_in_bet(node* &head, int data, int index)
{
    node* new_node = new node();
    node* temp = head;
    new_node->data = data;
    int i = 0;
    while (i != index-1)
    {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    temp->next->pre = new_node;
    new_node->pre = temp;
}

int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();
    
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
    fourth->next = NULL;
    fourth->pre = third;

    insert_in_beg(head, -2);
    insert_at_last(head, 67);
    insert_in_bet(head, -4, 2);
    traversal(head);

    return 0;
}