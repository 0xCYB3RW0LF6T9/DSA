#include <iostream>
using namespace std;
void show(int a[],int size)
{
    for(int i=0; i<size; i++)
        cout<<a[i]<<" ";

}

void inserting(int a[],int size,int val,int index)
{

    for(int i=size-1; i>=index; i--)
    {
        a[i+1]=a[i];
    }
    a[index]=val;

}
void deleting(int a[],int size, int index)
{
    for(int i=0; i<size; i++)
    {
        if(i==index)
        {
            a[i]=a[i+1];
        }
    }


}
void sorting(int a[], int size)
{
    int temp=0;
    for(int i =0; i<size;i++)
    {for(int j =0; j<size;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }


    }



}
int main()
{
    int a[100];
    int size,i;
    cout<<"Enetr your limit = ";
    cin>>size;
    for(i=0; i<size; i++)
    {
        cin>>a[i];

    }
    show(a,size);
    cout<<"\nEnter your value = ";
    int val ;
    cin>>val;
    cout<<"\n Enter your index = ";
    int index;
    cin>>index;
    inserting(a,size,val,index);
    size+=1;
    show(a,size);
    cout<<"\nEnter index for deletation = ";
    int index_d;
    cin>>index_d;
    deleting(a,size,index_d);
    size-=1;
    show(a,size);
    cout<<"\n";
    sorting(a,size);
    show(a,size);
    return 0;
}
