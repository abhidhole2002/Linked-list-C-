#include<iostream>
using namespace std;

class slist
{
    int data;
    slist* head;
    slist* next;

    public:
    slist()
    {
        head=NULL;
    }

    void addtail(int x)
    {
        slist* newnode = new slist();
        newnode->data = x;
        newnode->next = NULL;

        if(head==NULL)
        {
            head = newnode;
        }
        else
        {
            slist* temp = head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next = newnode;
        }

    }

    void print()
    {
        slist* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    int size;
    cout<<"enter size of linke list : ";
    cin>>size;

    int a[size];
    cout<<"enter elements : ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    slist obj;
    for(int i=0;i<size;i++)
    {
        obj.addtail(a[i]);
    }

    
    obj.print();
}
 
 
