#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int d1, d2, v1, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int tmp=0, cnt=0;
	for(int i=1; tmp<p; ++i) {
		if(i>=d1)
			tmp+=v1;
		if(i>=d2)
			tmp+=v2;
		cnt++;
	}
	cout << cnt << "\n";
}
