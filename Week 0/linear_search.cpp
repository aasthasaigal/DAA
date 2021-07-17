#include<iostream>
using namespace std;
int main()
{
    int n,i,k,flag=0;
    cout<<"Enter the value of n\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in an array\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key element\n";
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            cout<<"Key element found at index "<<i<<".\nTotal number of comparisons are "<<i+1;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Key element not found";
    }
}
