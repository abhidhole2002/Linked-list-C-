#include<iostream>
using namespace std;

class slist
{
    int data;
    slist *head,*next;

    public:
    slist()
    {
        head=NULL;

    }

    void addhead(int x)
    {
        slist* new_node = new slist();
        new_node->data = x;

        new_node->next = head;
        head = new_node;
    }


    void print()
    {
        for(slist* temp=head;temp!=NULL;temp=temp->next)
        {
            cout<<temp->data<<" ";
        }
    }

    int search(int x)
    {
        for(slist* temp=head;temp!=NULL;temp=temp->next)
        {
            if(temp->data==x)
            {
                return 1;
            }
        }

        return -1;

    }
};

 
int main()
{
    slist obj;
    obj.addhead(10);
    obj.addhead(11);
    obj.addhead(12);
    obj.print();
    cout<<endl<<obj.search(17);


 
 
}