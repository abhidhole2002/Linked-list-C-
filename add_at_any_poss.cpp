#include<iostream>
using namespace std;

class slist
{
    int data;
    slist *head,*next;

    public:

    slist()
    {
        head = NULL;
    }


    void addhead(int x)
    {
        slist* new_node = new slist();
        new_node->data=x;

        new_node->next = head;
        head=new_node;
    }

    void addtail(int x)
    {
        slist* new_node = new slist();
        new_node->data=x;

        if(head==NULL)
        {
            head=new_node;
        }

        else
        {

            slist* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next = new_node;
        }
    }

    void add_at_any_pos(int pos,int x)
    {
        slist* new_node = new slist();
        new_node->data = x;

        slist* temp = head;
        
        if(pos==1)
        {
            addhead(x);
            return;
        }


        else
        {
            for(int i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
        }

        new_node->next = temp->next;
        temp->next = new_node;

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
    slist obj;
    obj.addhead(10);
    obj.addhead(11);
    obj.addhead(12);
    obj.addtail(11);
    obj.addtail(12);
    obj.add_at_any_pos(2,100);
    obj.print();
 
}