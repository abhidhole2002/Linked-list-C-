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

    void getMax()
    {
        int max = head->data;

        slist* temp= head;

        while (temp != NULL)
        {
            if (temp->data > max)    // by changing > this sign to < this we can find minimum in list
            {
                max = temp->data;
            }

            temp = temp->next;
        }

        cout<<"the maximum in this list ==>> " <<max;
    }

    void print()
    {
        for(slist* temp=head;temp!=NULL;temp=temp->next)
        {
            cout<<temp->data<<" ";
        }
    }
};

 
int main()
{
    slist obj;
    obj.addhead(10);
    obj.addhead(11);
    obj.addhead(12);
    obj.print();

    cout<<endl;

    obj.getMax();


 
 
}
