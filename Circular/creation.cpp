#include<iostream>
using namespace std;

struct node
{
    int data;
    node* nextadd;
};

int main()
{
    node* head;
    node* second;
    node* third;
    node* last;
    head = new node();
    second = new node();
    third = new node();
    last = new node();

    head->data = 1;
    head->nextadd = second;

    second->data = 2;
    second->nextadd = third;

    third->data = 3;
    third->nextadd = last;

    last->data = 4;
    last->nextadd = head;

    return 0;
}