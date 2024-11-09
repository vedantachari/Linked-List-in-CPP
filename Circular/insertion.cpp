#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void traversal(node* head)
{
    node* temp = head;
    cout << "Elements : " << temp->data << " Next Node : " << temp->next << endl;
    while (temp->next != head)
    {
        temp = temp->next;
        cout << "Elements : " << temp->data << " Next Node : " << temp->next << endl;
    }
}

void insert_in_beg(node* &head, int data)
{
    node* new_node = new node();
    node* temp = head;
    while (temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void insert_at_last(node* &head, int data)
{
    node* new_node = new node();
    node* temp = head;
    while (temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
    new_node->data = data;
}

void insert_in_bet(node* &head, int data, int index)
{
    node* new_node = new node();
    node* temp = head;
    int i = 0;
    while (i!=index-1)
    {
        temp = temp->next;
        i++;
    }
    new_node->data = data;
    new_node->next = temp->next;
    temp->next = new_node;
    new_node->data = data;
}

int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* last = new node();

    head->data = -8;
    head->next = second;

    second->data = 82;
    second->next = third;

    third->data = -5;
    third->next = last;

    last->data = 55;
    last->next = head;

    insert_in_beg(head, 23);
    insert_at_last(head, 32);
    insert_in_bet(head, 65, 2);
    traversal(head);
    return 0;
}