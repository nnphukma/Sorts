#include <iostream>
// Selection sort
using namespace std;

void selectionSort(int a[], int n){
	for (int i = 0; i < n -1; i++){
		int min_post = i;
		for (int j = i + 1; j < n; j++){
			if (a[j] > a[min_post]){
				min_post = j;
				
			}
		}
		swap(a[i], a[min_post]);
	}
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		
	}
	
	selectionSort(a, n);
	
//	for (int  i =0; i < n; i++){
//	cout << a[i] << " ";
//	}

	for(int x : a) cout << x << " ";
return 0;
}