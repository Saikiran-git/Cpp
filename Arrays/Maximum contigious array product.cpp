#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int maxval = 1; 
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int minval = 1; 
    int lol = 1; 
    int f = 0; 
    for (int i = 0; i < n; i++) { 
        if (arr[i] > 0) { 
            maxval = maxval * arr[i]; 
            minval = min((minval* arr[i]), 1); 
            f = 1; 
        } 
       else if (arr[i] == 0) { 
            maxval = 1; 
            minval= 1; 
        } 
        else { 
            int temp = maxval; 
            maxval = max(minval * arr[i], 1); 
            minval = temp * arr[i]; 
        } 
          if (lol < maxval) 
            lol = maxval; 
    } 
    if (f== 0 && lol == 1) 
        cout << "0"; 
    cout << lol;
    return 0;
}