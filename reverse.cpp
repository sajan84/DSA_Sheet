// C++ program to reverse an array without
// using "-" sign
#include <bits/stdc++.h>
using namespace std;

// Function to reverse array
void reverseArray(int arr[], int n)
{

	// Reverse array in simple manner
	for (int i = 0; i < n / 2; i++)

		// Swap ith index value with (n-i-1)th
		// index value
		// Note : A - B = A + ~B + 1
		// So n - i = n + ~i + 1 then
		// n - i - 1 = (n + ~i + 1) + ~1 + 1
		swap(arr[i], arr[(n + ~i + 1) + ~1 + 1]);
}

// Driver code
void reverseArray2(int arr[],int start,int end){
	while (start<end)
	{
		swap(arr[start++],arr[end--]);
	}
	
}
int main()
{
	int arr[] = { 5, 3, 7, 2, 1, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	reverseArray(arr, n);

	// print the reversed array
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	//pre define function is 
	// reverse(arr,arr+n);	

	return 0;
}
