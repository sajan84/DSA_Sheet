/*Given heights of n towers and a value k. We need to either increase or decrease the height of every tower by k (only once) where k > 0. The task is to minimize the difference between the heights of the longest and the shortest tower after modifications and output this difference.
Examples: 



Input  : arr[] = {1, 15, 10}, k = 6
Output :  Maximum difference is 5.
Explanation : We change 1 to 7, 15 to 9 and 10 to 4. Maximum difference is 5 (between 4 and 9). We can't get a lower difference.*/






#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int max_=arr[n-1];
        int min_=arr[0];
        int res=max_-min_;
        for(int i=1;i<n;i++){
         if(arr[i] - k < 0) // if on subtracting k we got negative then continue 
        continue;
            max_=max(arr[i-1]+k,arr[n-1]-k);
            min_=min(arr[i]-k,arr[0]+k);
            res=min(res,max_-min_);
        }
        return res;
       
    }
};