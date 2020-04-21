#include <bits/stdc++.h>
using namespace std;

int BSearch(int arr[], int, int, int);
 
// Returns position of first ocurrence of key in array
int ExpSearch(int arr[], int n, int key){
    // If key is present at first index itself
    if (arr[0] == key)
        return 0;
 
    // Find range for binary search by repeated doubling
    int i = 1;
    while (i < n && arr[i] <= key)
        i *= 2;

    //  Call binary search for the found range.
    return BSearch(arr, i / 2, min(i, n), key);
}
 
// Recursive binary search function. It returns
// location of key in given array arr[l..r] is
// present or else we will return -1
int BSearch(int arr[], int l, int r, int key){
    if (r >= l){
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle itself
        if (arr[mid] == key)
            return mid;
 
        // If element is smaller than mid, then it can only be present n left subarray
        if (arr[mid] > key)
            return BSearch(arr, l, mid - 1, key);
 
        // Else the element can only be present  in right subarray
        return BSearch(arr, mid + 1, r, key);
    }
    // when element is not present in array
    return -1;
}

//Driver code
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Size of array
    int n;
    cin >> n;
    int i;
    int arr[n];
    for(i = 0; i < n; i++)
        cin >> arr[i];
    // Enter key to be found
    int key;
    cin >> key;
    int result = ExpSearch(arr, n, key);
    result == -1 ? cout << "Element " << key << " is not present in array" << endl : cout << "Element " << key << " is present at position " << result + 1 << endl;
    return 0;
}