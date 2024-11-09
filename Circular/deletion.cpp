#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void traversal(node* &head)
{
    node* temp = head;
    cout << "Elements : " << temp->data << " Next Node : " << temp->next << endl;
    while (temp->next != head)
    {
        temp = temp->next;
        cout << "Elements : " << temp->data << " Next Node : " << temp->next << endl;
    }
    cout << endl;
}

void delete_first(node* &head)
{
    node* temp = head;
    node* temp1 = head;
    while (temp1->next != head)
    {
        temp1 = temp1->next;
    }
    head = head->next;
    temp1->next = head;
    delete temp;
}
void delete_last(node* &head)
{
    node* temp1 = head;
    node* temp2 = head->next;
    while (temp2->next != head)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    temp1->next = head;
    delete temp2;
}

void delete_bet(node* &head, int index)
{
    node* temp1 = head;
    node* temp2;
    int i = 0;
    while (i < index)
    {
        temp1 = temp1->next;
        i++;
    }
    temp2 = temp1->next;
    temp1->next = temp2->next;
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

    second->data = 25;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = -14;
    fourth->next = fifth;
    
    fifth->data = 34;
    fifth->next = sixth;

    sixth->data = -79;
    sixth->next = seventh;

    seventh->data = 11;
    seventh->next = head;

    traversal(head);
    delete_first(head);
    delete_last(head);
    delete_bet(head, 2);
    traversal(head);
    return 0;
}