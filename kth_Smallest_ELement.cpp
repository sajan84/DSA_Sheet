#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    int k;
    cout<<"Enter which smallest elemnt you want?: ";
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //For find kth smallest element first we find out how to sort the array
    //For sort a array
    sort(arr,arr+n);
    cout<<k<<"th smallest elemnt is "<<arr[k-1]<<endl;

    
    return 0;
}