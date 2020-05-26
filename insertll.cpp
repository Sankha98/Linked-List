#include<bits/stdc++.h>
using namespace std;
#include "linked.cpp"
Node *input()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail -> next = n;
            tail = tail -> next;
            // Node *temp = head;
            // while (temp->next != NULL)
            // {
            //     temp = temp -> next;
            // }
            // temp->next = n;   
        }     
        cin >> data;
    }
    return head;
}
Node *insert(Node *head,int i,int data)
{
    Node *newnode = new Node(data);
    int count = 0;
    Node *temp = head;
    if(i == 0)
    {
        newnode -> next = head;
        head = newnode;
        return head;
    }
    while (temp != NULL && count < i - 1)
    {
        temp = temp -> next;
        count++;
    }
    if(temp != NULL)
    {
        newnode -> next = temp -> next;
        temp -> next = newnode;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }   
}

int main()
{
    Node *head = input();
    print(head);
    int i,data;
    cin >> i >> data;
    head = insert(head,i,data);
    print(head);
    //statically
    // Node n1(1);
    // Node *head = &n1;
    // //head is a pointer variable of 8byte size
    // Node n2(2);
    // n1.next = &n2;
    // cout << head -> data << " " << head -> next -> data << endl;
    
    //Dynamically
    // Node *n3 = new Node(10);
    // Node *head = n3;
    // Node *n4 = new Node(20);
    // n3 -> next = n4;
    // print(head);
    //n4 -> next = NULL;
    //cout << head -> data << " " << head -> next -> data << endl;
}