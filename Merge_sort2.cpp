#include <iostream>
#include<bits/stdc++.h>
#include <vector>
// Merge_sort2

using namespace std;

int  merge(int a[], int  l, int m, int r){
	vector <int> x(a + l, a + m + 1);
	vector <int> y(a + m + 1, a + r + 1);
	int i =0, j = 0;
	int cnt = 0;
	while( i < x.size() && j < y.size()){
		if(x[i] <= y[j]){
			a[l] = x[i]; ++l; ++i;
		}
		
		else{
			cnt += x.size() - i;
			a[l] = y[j]; ++l; ++j;
		}
	}
	while(i < x.size()){
		a[l] = x[i]; ++l; ++i;
	}
	while(j < y.size()){
		a[l] = y[j]; ++l; ++j;
	}
	return cnt;
}

int mergeSort(int a[], int l  , int r){
	int dem = 0;
	if(l < r){

		int m =(l + r)/2;
		dem += mergeSort(a, l, m);
		dem += mergeSort(a, m + 1, r);
		dem += merge(a, l ,m ,r);
	}
	return dem;
}
int main(){
//	int n =1000;
//	int a[1000];
//	srand(time(NULL));
//	for(int i = 0; i< n; i++){
//		a[i] = rand() % 1000;
//	}
//	mergeSort(a, 0, n -1);
//	for(int x : a) cout << x <<  " ";
//	
//	int ans = mergeSort(a, 0 , n -1);
//	cout << ans << endl;
	int a[6] = { 8 , 7 , 1, 9 ,2 ,3};
	cout << mergeSort(a, 0 ,5);
	return 0;
} 