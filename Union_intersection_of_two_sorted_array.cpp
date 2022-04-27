#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void unionArray(int arr1[],int arr2[],int n1,int n2){
    int  new_array[n1+n2];
    //n1 is the size of the first array
    //n2 is the size of the second array
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    int i=0;//for the maintain index of array1
    int j=0;//for the maintain the index of arra2
    int k=0;//for the maintain the index of new array which is sorted of first and second array wnd that are merged
    while (i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j]){
            new_array[k++]=arr1[i++];
        }
        else if(arr1[i]>arr2[j]){
            new_array[k++]=arr2[j++];
        }
        else if(arr1[i]==arr2[j]){
            new_array[k++]=arr1[i++];
            j++;
        }
    }
    for (; i < n1; i++)
    {
        new_array[k++]=arr1[i];
    }
    for ( ; j < n2; j++)
    {
       new_array[k++]=arr2[j];
    }
    cout<<"Union of two array: "<<endl;
    for (int i = 0; i <k; i++)
    {
        cout<<new_array[i]<<" ";
    }
    cout<<endl;
}

void intersectionArray(int arr1[],int arr2[],int n1,int n2){
    int size;
   if(n1<=n2){
       size=n1;
   }
   else{
       size=n2;
   }
   int new_array[size];
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
     int i=0;//for the maintain index of array1
    int j=0;//for the maintain the index of arra2
    int k=0;//for the maintain the index of new array which is sorted of first and second array wnd that are Intersection
    while (i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        if(arr1[i]>arr2[j]){
            j++;
        }
        if(arr1[i]==arr2[j]){
            new_array[k++]=arr1[i++];
            j++;
        }
    }
    cout<<"Intersection of Two array: "<<endl;
    for (int i = 0; i < k; i++)
    {
        cout<<new_array[i]<<" ";
    }
    
    
}

int main(){
    int arr1[5]={5,4,3,2,1};
    int arr2[5]={5,4,3,10,25};
    unionArray(arr1,arr2,5,5);
    intersectionArray(arr1,arr2,5,5);

    return 0;
}