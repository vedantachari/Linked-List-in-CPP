/*  There are 3 types of insertion : 

        1)Insertion in the Beginning
          
        2)Insertion at Last

        3)Insertion in between  
    
        4)Insertion after a NODE 
*/
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
        cout << "Element : " << ptr->data << "\tLocation :\t" << ptr->next << endl;
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

int main()
{
    node* head;
    node* second;
    node* third;
    head = new node();
    second = new node();
    third = new node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    
    insert_in_beg(head, 0);
    traversal(head);

    return 0;
}