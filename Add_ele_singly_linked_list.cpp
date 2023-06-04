#include <iostream>
using namespace std;

class slist {
    int data;
    slist* next;
    slist* head;

public:
    

    slist() {
        head = NULL;
    }

    void addhead(int x) {
        slist* newnode = new slist();
        newnode->data = x;
        newnode->next = head;
        head = newnode;
    }

    void print() {
        slist* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    
    int size;
    cout<<"enter size of linked list : ";
    cin>>size;

    int a[size];
    cout<<"enter elements : ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    slist obj;
    for(int i=0;i<size;i++)
    {
        obj.addhead(a[i]);
    }

    
    obj.print();
}
