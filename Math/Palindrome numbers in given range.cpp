#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main() {
    ll n;
    cin >> n;
    ll f = 1;
    while(f <= n)
    {
        ll sum=0, temp = f;
        while(temp != 0){
                int rem = temp % 10;
                sum = (sum * 10) + rem;
                temp /= 10;
                
        }
        if(sum == f)
            cout << f << " ";
        f += 1;
    }   
    return 0;
}