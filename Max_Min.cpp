//Find The max and min number in the array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//This function return a pair of Min and Max Element
pair<long long, long long>getMInMax(long long a[],int n){
    sort(a,a+n);// n is the size of the array
    pair<int,int> p;
    p.first=a[0];
    p.second=a[n-1];
    return p;
}
//second Method is liner search


int main(){
    
    return 0;
}