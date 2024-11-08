#include<iostream>
using namespace std;

struct node
{
    int data;
    node* nextadd;
};

void traversal(node* ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << "\tNext Node :\t" << ptr->nextadd << endl;
        ptr = ptr->nextadd;
    }
}

int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();

    head->data = 1;
    head->nextadd = second;

    second->data = 2;
    second->nextadd = third;

    third->data = 3;
    third->nextadd = NULL;
    
    traversal(head);

    return 0;
}