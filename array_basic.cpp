//Priti
//23070123103
//array input
#include<iostream>
using namespace std;
int main()
{
    int i,a;
    cout<<"Enter number of elements of array: ";
    cin>>a; //either number of rows or columns
    int arr[a];//declaring the array of size a
    cout<<"Enter elements of array: "<<endl;
    for(i=0;i<a;i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Entered array is: "<<endl;
    for(i=0;i<a;i++)
    {
        
        cout<<arr[i]<<" ";
    }
return 0;
}