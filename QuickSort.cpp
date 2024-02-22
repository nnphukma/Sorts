#include <bits/stdc++.h>

using namespace std;
   // quick sort plomuto
//int partition(int a[], int l, int r){
//	int i = l -1;
//	int pivot = a[r];
//	for (int j = l; j < r; j++){
//		if(a[j] <= pivot){
//			++i;
//			swap(a[i], a[j]);`
//		}
//	}
//	++i;
//	swap(a[i], a[r]);
//	return i;
//}
//
//
//void quicksort(int a[], int l, int r){
//	if (l >= r) return;
//	int p = partition(a, l , r);
//	quicksort(a, l, p - 1 );
//	quicksort(a, p + 1, r);
//}
//
//
//int main(){
//	int a[1000], n; cin >> n;
//	srand(time(NULL));
//	for(int i = 0; i < n; i++){
//		a[i] = rand() % 1000;
//	}
//	quicksort(a, 0, n -1);
//	for (int i = 0; i < n; i++){
//		cout << a[i] << " ";
//	}
//	return 0;
//}


		// quicksort Hoare
	int hoare(int a[], int l, int r){
		int pivot = a[l];
		int i = l -1 , j = r + 1;
		while(1){
		do{
			++i;
		} while (a[i] < pivot);
		do {
		--j;
		} while(a[j] > pivot);
		if ( i < j){
			swap(a[i], a[j]);
		}
		else return j;
	}
}


void quicksort(int a[], int l, int r){
	if ( l>= r) return;
	int p = hoare(a, l, r);
	quicksort(a, l , p);
	quicksort(a, p + 1, r);
}		


	int main(){
	int a[1000], n; cin >> n;
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		a[i] = rand() % 1000;
	}
	quicksort(a, 0, n -1);
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
			return 0;
		}