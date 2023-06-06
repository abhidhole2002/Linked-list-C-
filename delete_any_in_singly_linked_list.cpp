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

  void delete_any(int value)
  {
        if(head!=NULL)
        {
           
        // Check if the head node needs to be deleted
        if (head->data == value) {
            slist* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        slist* curr = head;
        slist* prev= head;

        // Traverse the list to find the node to delete
        while (curr->data != value) {
            prev = curr;
            curr = curr->next;
        }


        // Delete the node by updating the pointers
        prev->next = curr->next;
        delete curr;
        curr = NULL;
    }
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
    cout<<"after deleting head --> ";
    obj.delete_any(10);
    obj.print();

    cout<<endl;

    cout<<"after deleting tail --> ";
    obj.delete_any(12);
    obj.print();

    cout<<endl;
    
    cout<<"after deleting 11 --> ";
    obj.delete_any(11);
    obj.print();
 
}