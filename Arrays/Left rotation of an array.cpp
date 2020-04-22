#include <iostream>
using namespace std;
int main(){
	int n, k;
	// Enter size of array
	cin >> n;
    // Number of positions to rotate the array towards left
	cin >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int flag = 0;
	for (int i = 0; i < k; i++){
		flag = arr[0];
		for (int j = 0; j < n; j++){
			if (j == n - 1)
				arr[n - 1] = flag;
			else
				arr[j] = arr[j + 1];
		}
	}
	// Rotated array is
	for (int j = 0; j < n; j++)
		cout << arr[j] << " ";
	return 0;
}