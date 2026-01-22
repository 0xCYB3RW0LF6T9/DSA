#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int a)
    {
        data=a;
        next=prev=NULL;
    }
};

class Doubly_List
{
public:
    Node* head;
    Node* tail;
    Doubly_List()
    {
        head=tail=NULL;
    }
    void push_front(int a)
    {
        Node* newNode= new Node(a);
        if(head==NULL)
        {
            head=tail=newNode;

        }
        else
        {

            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void push_back(int a)
    {
        Node* newNode= new Node(a);
        if(head==NULL)
        {
            head=tail=newNode;

        }
        else
        {
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
            }


    }

    void display()
    {
        Node* temp=head;
        while(temp!=NULL)
        {

            cout<<temp->data<<"<=>";
            temp=temp->next;

        }



    }


    void pop_front()
    {
        if(head==NULL)
        {

            return;
        }

        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;




    }
    void pop_back()
    {
        if(head==NULL)
        {
            return;

        }
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;






    }
};

int main()
{
    Doubly_List l;
    l.push_front(10);
    l.push_front(120);
    l.push_front(130);
    l.push_back(1690);
    l.push_back(69);
    l.push_front(10);
    l.push_back(100);

    l.pop_back();
    l.display();
}
