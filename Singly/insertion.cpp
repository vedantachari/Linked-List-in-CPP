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
}

void insert_in_beg(node* &head, int val)
{
    node* new_node = new node();
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}

void insert_at_last(node* &head, int val)
{
    node* new_node = new node();
    node* temp = head;
    new_node->data = val;
    new_node->next = NULL;
    if (head == NULL) 
    {
        head = new_node; 
        return;
    }

    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insert_in_between(node* &head, int index, int val)
{
    node* new_node = new node();
    node* temp = head;
    int i = 0;
    while (i < index-1)
    {
        temp = temp->next;
        i++;
    }
    new_node->data = val;
    new_node->next = temp->next;
    temp->next = new_node;
}

int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    
    insert_in_beg(head, 0);
    traversal(head);
    insert_in_between(head, 2, 7); 
    traversal(head);

    return 0;
}