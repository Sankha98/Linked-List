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
int length(Node *head) 
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node *temp = head;
    int count = 1;
    while(temp != NULL && temp -> next != NULL)
    {
        count++;
        temp = temp -> next;
    }
    return count;
}


void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}


int main() {
    Node *head = input();
    int pos;
    cin >> pos;
    cout << length(head);
    return 0;
}