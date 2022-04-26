#include<iostream>
using namespace std;
//the question is only consisting 0,1 and 2 we sort it without using sort algo
void sort(int arr[],int n){
    int noOf0=0,noOf1=0,noOf2=0;
    for(int i=0;i<n;i++){
        if (arr[i]==0)
        {
            noOf0++;
        }
        else if (arr[i]==1)
        {
            noOf1++;
        }
        else if (arr[i]==2)
        {
            noOf2++;
        }
        
    }
    int j=0;
    for (int i = 0; i < noOf0; i++)
    {
        arr[j++]=0;

    }
    for (int i = 0; i < noOf1; i++)
    {
        arr[j++]=0;
    }
    for (int i = 0; i < noOf2; i++)
    {
        arr[j++]=0;
    }
    
    
}

int main(){


    
    return 0;
}