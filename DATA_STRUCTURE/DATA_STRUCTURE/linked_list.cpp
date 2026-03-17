#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void insert_last(int value)
{
    node* arr=new node;
    arr->data=value;
    arr->next=NULL;
    if(head==NULL)
    {
        head=arr;
    }
    else
    {
        node *sh=head;
        while (head->next!=NULL)
        {
          sh=sh->next;
        }
        sh->next=arr;
    }
}
