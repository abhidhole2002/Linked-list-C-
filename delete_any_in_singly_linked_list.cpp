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
        // Traverse the list to find the node to delete
        while (curr->next->data != value)
        {
            curr = curr->next;
        }

        slist* del_node=curr->next;
        curr->next=curr->next->next;
        delete del_node;
        del_node = NULL;

    }
  }


  void delete_pos(int position)
  {
   
    if(position==1)
    {
        slist* temp=head;
        head=head->next;
        delete temp;
        temp=NULL;
    }

    else
    {
        slist* curr = head;
        slist* prev = NULL;

        for(int i=1;i<position;i++)
        {
            prev = curr;
            curr=curr->next;
        }

        prev->next=curr->next;
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
    /*cout<<"after deleting head --> ";
    obj.delete_any(10);
    obj.print();*/

    //obj.delete_pos(3);
    //obj.print();


    obj.delete_any(10);
    obj.print();

    /*cout<<"after deleting tail --> ";
    obj.delete_any(12);
    obj.print();

    cout<<endl;

    cout<<"after deleting 11 --> ";
    obj.delete_any(11);
    obj.print();*/
 
}