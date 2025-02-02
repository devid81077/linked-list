#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
// int Print(Node *head)
// {
//     //Node *temp = head;
//     while(head!= NULL)
//     {

//         Node *temp = head;
//         temp = temp->next;
//         return temp->data;
//     }
// }
void reverse (Node *head)
{
    if(head == NULL)
     return;
    reverse (head->next);
    cout<< head->data<<" ";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    Node *head = new Node();
    head->data = arr[0];
    Node *temp = head;
    
    for(int i=1; i<n; i++)
    {
        temp->next = new Node();
        temp = temp->next;
        temp->data = arr[i];
    }
   // cout<<Print(head);  
    reverse(head);
    return 0;
}



