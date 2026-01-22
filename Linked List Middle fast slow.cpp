#include<iostream>
using namespace std;

class Node
{
public :
    int data;
    Node* next;

    Node(int a)
    {
        data=a;
        next=NULL;
    }


};

class List
{
public :
    Node* head;
    Node* tail;
    List()
    {
        head=tail=NULL;
    }


    void push_front(int a)
    {
        Node* newNode = new Node(a);
        if(head==NULL)
        {
            head=tail=newNode;

        }
        else
        {

            newNode->next=head;
            head=newNode;
        }




    }
    void push_back(int a)
    {
        Node* newNode= new Node(a);
        if(head==NULL)
        {

            head = tail = newNode;
        }

        else
        {

            tail->next=newNode;
            tail=newNode;



        }

    }
    void show()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp= temp->next;
        }




    }
void middle()
{
        Node* slow=head;

        Node* fast=head;

    while(fast!=NULL && fast->next!=NULL)//2nd condition is for even
    {

        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"Middle element = "<<slow->data;
}


};
int main()
{


    List l;
    l.push_back(10);
    l.push_back(150);
    l.push_back(170);
    l.push_back(470);

    l.show();
    l.middle();





}

