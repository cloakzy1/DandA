#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

};


Node* head = NULL;

int insertNode(int data)
{
    Node *temp= new Node();
    temp->data =data;
    temp->next = NULL;

    if(head==NULL)
    {
        head=temp;
        return 0;
    }

    Node* temp1 =head;
    while(temp1->next!=NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next =temp;
}


void printNode()
{

    Node* print =head;
    while(print!=NULL)
    {
        cout<<print->data<< "->";
        print=print->next;
    }

}
void insetFirst(int data){
    Node *temp = new Node();
    temp->data = data;
    Node * temp1 = head;
    head = temp;
    temp->next =temp1;

}



int main()
{
    int N;
    cin>>N;
    while(N>0){
        int data;
        cin>> data;
        insertNode(data);
        N--;
    }

    insetFirst(11);
    insetFirst(10);
    printNode();
    cout<<"this is the first linklist file code"<<;
    return 0;

}



