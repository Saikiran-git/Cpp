#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, i, arr[50], key, f, l, mid;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> arr[i];
	cin >> key;
	f = 0;
	l = n - 1;
	mid = (f + l) / 2;
	while (f <= l)
	{
		if(arr[mid] < key)
			f = mid + 1;
		else if(arr[mid] == key){
			cout << key << " found at index " << mid + 1 << endl;
			break;
		}
		else
			 l = mid - 1;
		mid = (f + l) / 2;
	}
	if(f > l)
		cout << key << " not found in the list" << endl;  
    return 0;
}