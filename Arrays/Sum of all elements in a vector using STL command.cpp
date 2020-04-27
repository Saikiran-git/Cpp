/*Sum of all elements in a vector using STL command*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    //accumulate is the STL command used to sum up all the 
    //elements present in the vector.. and the 0 is the  
    //initial sum value which the value is to be added to
    cout << accumulate(v.begin(), v.end(), 0) << endl;
    return 0;
}