#include<iostream>
using namespace std;

int main()
{

    int a[100],size,target,i,x;
    cout<<"Enter your size of array : ";
    cin>>size;
    cout<<"Enter your target value : ";
    cin>>target;
    for(i=0;i<size;i++)
    {
     cout<<"Enter array element ["<<i<<"] : ";
     cin>>a[i]   ;
    }
    for(i=0;i<size;i++)
    {
        if(a[i]==target)
        {   x=i;
        }
    }

  cout<<"Target value found at index no = "<<x<<endl;
   cout<<"Number of the target in the array = "<<x+1<<endl;




}
