#include<iostream>
using namespace std;

class slist 
{
    int data;
    slist* head;
    slist* next = NULL;;

    public:

    slist()
    {
        head = NULL;
    }

    void addtail(int x)
    {
        slist* newn = new slist();
        newn->data = x;
        newn->next = NULL;

        if(head==NULL)
        {
            head = newn;
        }

        else
        {
            slist* temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
            newn->next = NULL;
        }
    }

    void print()
    {
        for(slist* temp = head;temp!=NULL;temp=temp->next)
        {
            cout<<temp->data<<" ";
        }
    }

    void priint_rev()
    {
        slist* prev = NULL;
        slist* curr = head;
        slist* next = NULL;

        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

    }
};
 
int main()
{
    slist obj;
    obj.addtail(10);
    obj.addtail(11);
    obj.addtail(12);
    obj.addtail(13);
    obj.print();
    obj.priint_rev();
    cout<<endl<<"After reversing -->> ";
    obj.print();
 
 
}