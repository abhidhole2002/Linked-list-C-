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
        newn->next = head;
        head = newn;
    }

    void print()
    {
        for(slist* temp = head;temp!=NULL;temp=temp->next)
        {
            cout<<temp->data<<" ";
        }
    }

    void sum_and_mul()
    {
        int sum = 0;
        int mul = 1;

        for(slist* temp = head;temp!=NULL;temp = temp->next)
        {
            sum+=temp->data;
            mul*=temp->data;
        }

        cout<<"SUM OF ALL NODE --->>> "<<sum<<endl;
        cout<<"MUL OF ALL NODE --->>> "<<mul;
    }
};
 
int main()
{
    slist obj(0);
    obj.addhead(50);
    obj.addhead(60);
    obj.addhead(70);
    obj.addhead(80);
    cout<<"LIST --->>> ";
    obj.print();
    cout<<endl;
    obj.sum_and_mul();
 
 
}