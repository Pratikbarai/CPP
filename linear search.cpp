//linear search using c++
#include<iostream>
using namespace std;
int linear_search(int a[],int size,int value)
{   int j=0;
    for(int i=0;i<size;i++)
        {
            if(a[i]==value)
                {j=1;
                 break;
                }   
               
        }
        if(j)    
            cout<<"Element found";
        else
                cout<<"Element not found"; 
        return 0;
}
int main()
{
    int size,i,value;
    cout<<"enter the size of array: ";
    cin>>size;
    cout<<"enter the elements of array: ";
    int array[size];
    for(i=0;i<size;i++)
        cin>>array[i];
    cout<<"Enter the search element: ";
    cin>>value;
    linear_search(array,size,value);
    return 0;
}