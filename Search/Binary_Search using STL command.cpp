//binary search using STL Command
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        int x;
        cin >> x;
        //Remember the binary search can be done only when 
        // the vector or array is in sorted form
        if(binary_search(v.begin(), v.end(), x))
            cout << "Found" << endl;
        else 
            cout << "Not Found" << endl;
    }
    return 0;
} 

/*
5
1 2 3 4 15
15
*/