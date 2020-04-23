/*maximum element in a stack */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int s[100000], max[100000];
    int top = -1, m = -1;
    int n,x,v;
    cin >> n;
    while(n--){
        cin >> x;
        if(x == 1){
            cin >> v;
            if(top == -1 || max[m] <= v)
                max[++m] = v;
            s[++top] = v;
        }
        else if(x==2){
            if(s[top] == max[m])
                m--;
                top--;
        }
        else
            cout << max[m] << endl;
    }
    return 0;
}
    