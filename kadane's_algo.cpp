#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;//to take the size of the array

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];//to take alla elments of the array
    }
    int maxsum=0,cursum=0;
    //maxsum is for return the maximum sub array  sum
    // and cursum is to record the current sum value 
    int count =0;//it's a track record if all value id negative
    for (int i = 0; i < n; i++)
    {
        cursum=cursum+arr[i];
        if (cursum>maxsum)
        {
            maxsum=cursum;
        }
        if (cursum<0)
        {
            cursum=0;
            count++;//it's a record for if all values are negative 
        }
        
        
    }
    if (count==n)
    {
        sort(arr,arr+n);
        cout<<arr[n-1]<<" ";
    }
    else{
        cout<<maxsum<<endl;
    }
   


    
    return 0;
}