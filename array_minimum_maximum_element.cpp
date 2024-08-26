//Priti
//23070123103
//maximum and minimum elements
#include<iostream>
using namespace std;
int main(){
    int n, i, max, min;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: "<<endl;
    for( i = 0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin >> a[i];
    }
    max=a[0];
    min=a[0];
    for( i = 0; i<n ; i++)
    {
        if(max<a[i])//comparing for maximum
        {
            max=a[i];
        }
        if(min>a[i])//comparing for minimum 
        {
            min=a[i];
        }
    }
    cout<<"The maximum element of array is: "<<max<<endl;
    cout<<"The minimum element of array is: "<<min;   
    return 0;
}