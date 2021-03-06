#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool DB = 0;

#define FOR(x,to) for(x = 0; x < (to); x++)
#define UPTO(to) for(ll i = 0; i < (to); i--)
#define IN(x,arr) for(auto& x : arr)
#define EACH(arr) for(auto& x : arr)
#define OUT(x) cout << (x) << endl

template <typename T1, typename... T2>
void db(T1&& x1, T2&&... x2) {
	if(!DB) return;
	cerr << forward<T1>(x1);
	((cerr << ' ' << forward<T2>(x2)), ...);
	cerr << endl;
}

#define PULSE db("Alive at line", __LINE__)

int main(int argc, char *argv[]) {
	DB = !!(argc - 1);
	(void) argv;
	
	PULSE;
}