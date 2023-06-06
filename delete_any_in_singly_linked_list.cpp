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
                temp= temp->next;
            }

            temp->next = newn;
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

    void delete_any(int data) {
    slist* temp = head;
    slist* temp2 = NULL;

    while (temp->data != data) {
      temp2 = temp;
      temp = temp->next;
    }

    if (temp == NULL)
    {
      cout << "Node not found" << endl;
      return;
    }
    else if(temp2 == NULL)
    {
      head = temp->next;
    }
    else
    {
      temp2->next = temp->next;
    }

    delete temp;
    temp =NULL;
  }



};
 
int main()
{

    slist obj;
    obj.addtail(10);
    obj.addtail(11);
    obj.addtail(12);
    obj.print();
    cout<<endl;
    obj.delete_any(10);
    obj.print();
 
}