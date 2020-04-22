/*Prime factors of a number*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, num, t;
    cin >> num;
    for(i = 2; i <= num; i++){
        if(num % i == 0){
            t  =  1;
            for(j = 2 ;j <= i / 2; j++){
                if(i % j == 0){
                    t = 0;
                    break;
                }
            }
            if(t == 1)
                cout << i << " ";
        }
    }
    return 0;
}