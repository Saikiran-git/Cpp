#include<bits/stdc++.h>
using namespace std;

int partition(int l, int h, int vec[]){
	int i = l;
	int j = h;
	int pivot = vec[i];
	while(i < j){
		do i++;
		while(vec[i] <= pivot);
		do j--;
		while(vec[j] > pivot);
		if(i < j){
			int flag = vec[i];
			vec[i] = vec[j];
			vec[j] = flag;
		}
	}
	int flag = vec[l];
	vec[l] = vec[j];
	vec[j] = flag;
	return j;
}

void quicksort(int h, int l, int vec[]){
	if(l < h){
		int j = partition(l, h, vec);
		quicksort(j, l, vec);
		quicksort(h, j + 1, vec);
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	int vec[n];
	int i;
	for(i = 0; i < n; i++)
		cin >> vec[i];
	quicksort(n, 0, vec);
		i = 0;
	for(i = 0; i < n; i++)
		cout << vec[i] << " ";
	return 0;
}



// :-) working