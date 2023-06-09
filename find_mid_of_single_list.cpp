#include<iostream>
using namespace std;

class slist
{
    int data;
    slist *head;
    slist *next=NULL;

    public:

    slist()
    {
        head=NULL;
    }

    void add_tail(int x)
    {
        slist* new_node = new slist();
        new_node->data = x;
        new_node->next = NULL;

        slist* temp=head;

        if (head== NULL)
        {
            head = new_node;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next = new_node;
            new_node->next = NULL;

        }

        
    }

    
    void print()
    {
        for(slist* temp =head;temp!=NULL;temp=temp->next)
        {
            cout<<temp->data<<" ";
            
        }
    }

    void mid()
    {
        slist* slow = head;
        slist* fast = head;

        while (fast != NULL&& fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "The middle element is: " << slow->data << endl;
    }
    
};
 
int main()
{
    slist obj;
    obj.add_tail(10);
    obj.add_tail(11);
    obj.add_tail(12);
    obj.add_tail(13);
    obj.add_tail(14);
    obj.add_tail(15);
    obj.print();
    cout<<endl;
    obj.mid();
 
 
}