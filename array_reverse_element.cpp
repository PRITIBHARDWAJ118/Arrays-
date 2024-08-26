//Priti
//23070123103
//reverse the elements of array
#include<iostream>
using namespace std;
int main()
{
    int i,a;
    cout<<"Enter number of elements of array: ";
    cin>>a; 
    int arr[a]; //declaring array of size a 
    cout<<"Enter elements of array: "<<endl;
    for(i=0;i<a;i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Original array: " <<endl;
    for(i=0;i<a;i++)
    {
        
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Reverse array is: "<<endl;
    for(i=(a-1);i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}