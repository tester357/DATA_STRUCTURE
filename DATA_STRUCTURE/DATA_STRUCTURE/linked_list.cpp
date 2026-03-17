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
        while (sh->next!=NULL)
        {
          sh=sh->next;
        }
        sh->next=arr;
    }
}
void Display()
{
    node* sho=head;
    if(head==NULL)
    {
        cout<<"IS EMPTY\n";
    }
    else
    {
        while(sho!=NULL)
        {
            cout<<sho->data<<"\t";
            sho=sho->next;
        }
    }

}
void Delet_BYvalue(int value)
{
    node*first=head,*last=NULL;
    if(head==NULL)
    {
        cout<<"IS EMPTY\n";
    }
    else if(head->data==value)
    {
        head=head->next;
        delete first;
        return ;
    }
    else
    {
        while(first!=NULL)
        {
            last=first;
            last->next=first->next;
            delete first;

        }
    }
}
int main()
{
    insert_last(3);
    insert_last(5);
    insert_last(9);
    insert_last(1);
    Display();
    cout<<"\n";
    Delet_BYvalue(3);
    Display();
}
