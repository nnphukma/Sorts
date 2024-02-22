#include<iostream>
// url: https://www.youtube.com/watch?v=o11f2d7q_Ew&list=PLux-_phi0Rz0Hq9fDP4TlOulBl8APKp79&index=31

using namespace std;


int dautien(int a[], int n, int x){
	int res = -1, l = 0, r = n -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x){
			res = m + 1;
			r = m -1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

int solanxhien(int a[], int n, int x){
	int cnt = 0;
	for(int i =0; i < n; i++){
		if(a[i] == x){
			cnt ++;
		}
	}
	return cnt;
}
   //bai 3
//int main(){
//	int n; cin >> n;
//	int a[n];
//	for(int &x : a) cin >> x;
//	for(int i = 0; i < n; i++){
//		int x = a[i], pos = i - 1;
//		while( pos >= 0 && a[pos] > x){
//			a[pos + 1 ] = a[pos];
//			--pos;
//		}
//		a[pos + 1] = x;
//		cout << "Buoc " << i << ":";
//		for(int j = 0; j <= i; j++){
//			cout << a[j] << " ";
//		}
//		cout <<  endl;
//	}
//	
//	return 0;
//}

	//bai7
//	int main(){
//		int t; cin >> t;
//		while(t--){
//			int n, x; cin >> n >> x;
//			int a[n];
//			for(int &x : a) cin >> x;
//			cout << dautien(a, n , x) <<  endl;
//		}
//		return 0;
//	}

	// bai 8
	int main(){
		int t; cin >> t;
		while(t--){
			int n, x; cin >> n >> x;
			int a[n];
			for(int &x : a) cin >> x;
			cout << solanxhien(a, n , x) << endl;
		}
		return 0;
	}