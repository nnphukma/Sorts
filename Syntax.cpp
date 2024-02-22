#include <bits/stdc++.h>

// include <Algorithm>
//min
//max
//min_element
//max_element
//accumalate
//swap
//sort
//stable_sort
//find
//binary_search
//lower_bound: >= x
//upper_bound: > x
//memset
//fill
//merge
//reverse
//set_union
//set intersection
//set_difference
//set_symmetric_difference

using namespace std;

int main(){
	int a[5] = {0,2,3,4,8};
	
	int b[] = {1,3,4,5,6,7};
	vector<int> u(11);
	auto it = set_symmetric_difference(a, a+5, b, b+6, u.begin());
	u.resize(it - u.begin());
	for (int x : u) cout << x << " ";
	
	return 0;
}