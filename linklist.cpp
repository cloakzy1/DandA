#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;

};

Node* head = NULL;
int Count;

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
    return 0;
}

void insetFirst(int data){
    Node *temp = new Node();
    temp->data = data;
    Node * temp1 = head;
    head = temp;
    temp->next =temp1;

}

void InsertNodeNthposition(int data,int position ){
    Node * temp = new Node();
    temp->data = data;
    Node *temp1 = head;  
    int count=0;
    while(temp1!=NULL){
        temp1= temp1->next;
        count+=1;
        if(count==position){
            temp1->next=temp;
            temp->next =temp1;
            

        }


    }
    cout<<count;



}


void printNode()
{

    Node* print =head;
    while(print!=NULL)
    {
        cout<<print->data<< "->";
        Count+=1;
        print=print->next;
    }

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
    cout<<Count<<endl;
    InsertNodeNthposition(12,2);
    
    return 0;


}
