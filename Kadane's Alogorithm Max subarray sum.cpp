#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>nums;
    int z;
    for(int i = 0; i < n; i++){
	    cin >> z;
	    nums.push_back(z);
    }
    int sol = INT_MIN;
    int x = 0;
    for(int i : nums){
        x += i;
        sol = max(sol, x);
        x = max(x, 0);
    }
    cout << sol << endl;
    return 0;
}
