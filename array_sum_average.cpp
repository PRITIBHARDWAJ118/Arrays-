//Priti
//23070123103
//Sum and average of array elements
#include<iostream>
using namespace std;
int main(){
    int n, i;
    float sum=0, avg;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout << "Enter array elements: ";
    for( i = 0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin >> a[i];
       sum=sum+a[i];       
    }
    avg=sum/n;
    cout<<"The sum of elements is = "<<sum<<endl;
    cout<<"The average of elements is = "<<avg<<endl;
    return 0;
}