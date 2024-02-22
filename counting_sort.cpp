#include <iostream>
//counting_sort
using namespace std;

int cnt[10000001];

int main(){
	int n; cin >> n;
	int a[n];
	int  m = INT_MIN;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		cnt[a[i]]++;
		m = max(m, a[i]);
		}
	for ( int i = 0; i <= m; i++){
		if(cnt[i] != 0){
			for(int i = 0; i < cnt[i]; i++){
				cout << i << " ";
			}
		} else continue;
	}
	
	
	return 0;
}