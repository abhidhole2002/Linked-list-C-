#include<iostream>
using namespace std;

class slist
{
    int data;
    slist* head;
    slist* next;

    public:

    slist(int data)
    {
        this->data = data;
        this->head = NULL;
        this->next = NULL;
    }

    void addhead(int x)
    {
        slist* newn = new slist(x);
        //newn->data = x;

        newn->next = head;
        head = newn;
    }

    void addtail(int x)
    {
        slist* newn = new slist(x);
        //newn->next = NULL;

        if(head == NULL)
        {
            head = newn;
        }

        else
        {
            slist* temp;
            for(temp = head;temp->next!=NULL;temp=temp->next){}
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

    void oddeven(slist* odd,slist* even)
    {
        for(slist* temp = head;temp->next!=NULL;temp=temp->next)
        {
            if(temp->data%2 == 0)
            {
                even->addhead(temp->data);
            }
            else
            {
                odd->addtail(temp->data);
            }
        }
    }
};
 
int main()
{
    slist obj(0);
    obj.addhead(4);
    obj.addhead(3);
    obj.addhead(2);
    obj.addhead(1);
    obj.addtail(5);
    obj.addtail(6);
    cout<<"ORIGINAL LIST --->>> ";
    obj.print();

    slist odd(0);
    slist even(0);

    obj.oddeven(&odd,&even);
    cout<<endl<<"ODD LIST --->>> ";
    odd.print();
    cout<<endl<<"EVEN LIST --->>> ";
    even.print();

    cout<<endl<<"AGAIN ORININAL LIST --->>> ";
    obj.print();
 
 
}