/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
В stdin даны два натуральных числа. 
Выведите в stdout их наибольший общий делитель.
*/

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	} else {
		return gcd(y, x % y);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int x, y;
	cin >> x >> y;

	cout << gcd(x, y);

	return 0;
}