#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> v;
	int z;
	for(int i = 0; i < n; i++){
	    cin >> z;
	    v.push_back(z);
	}
	int key, pos, c = 0;
	cin >> key;
	for(int i = 0; i < v.size(); i++){
	    if(v[i] == key){
	        c = 1;
			pos = i + 1;
	        break;
	    }
	}
	if(c == 1)
		cout << "Number " << key << " is found in the list in position " << pos << endl;
	else
	    cout << "Number " << key << " is not found in the list" << endl;
    return 0;
}