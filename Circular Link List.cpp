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
        Node* newNode= new Node(a);
        if(head==NULL)
        {

            head=tail=newNode;
            tail->next=head;
        }
        else
        {
            newNode->next=head;
            head=newNode;
            tail->next=head;

        }
    }
    void push_back(int a)
    {
        Node* newNode= new Node(a);
        if(head==NULL)
        {
            head=tail=newNode;
            tail->next=head;
        }

        else
        {
            newNode->next=head;
            tail->next = newNode;
            tail=newNode;



        }

    }

    void show()
    {
        cout<<head->data;
        Node* temp=head->next;

        while(temp!=head)
        {

            cout<<temp->data<<"=>";
            temp=temp->next;
        }
        cout<<head->data;


    }
    void pop_front()
    {
        if(head==NULL)
        {

            return;
        }

        Node* temp= head;
        head=head->next;
        temp->next=NULL;
        tail->next=head;
        delete temp;


    }
    void pop_back()
    {

        if(head==NULL)
        {
            return ;
        }
        else if(head==tail)
        {
            delete tail;
            head=tail=NULL;


        }
        else{
            Node* temp =head;
        while(temp->next!=tail)
        {
            temp=temp->next;

        }
        temp->next=NULL;
        delete tail;
        tail=temp;
        temp->next=head;




        }

    }
};
int main()
{

    List l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_back(69);
    l.pop_back();
    l.show();



}
