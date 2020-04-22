#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	// Consider a vector
	vector<int> v;
	int z;
	for(int i = 0; i < n; i++){
	    cin >> z;
	    v.push_back(z);
	}
	// using STL vector command
	sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
	    cout << v[i] << " ";
	return 0;
}