/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
На вход вашей программы в стандартном потоке ввода подаются 
действительные коэффициенты A, B и C уравнения Ax² + Bx + C = 0. 
Выведите все его различные действительные корни в поток вывода 
в любом порядке, при этом разделяя корни пробелами. Гарантируется, 
что хотя бы один из коэффициентов уравнения не равен нулю.
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	setprecision(3);

	float A, B, C;
	cin >> A >> B >> C;

	// If discriminant is non-negative
	if (B * B - 4 * (A * C) >= 0) {
		if (A != 0) {
			set<float> roots;

			float first_root = (sqrt(B * B - 4 * (A * C)) - B) / (2 * A);
			float second_root = ((-1) * sqrt(B * B - 4 * (A * C)) - B) / (2 * A);
			
			roots.insert(first_root);
			roots.insert(second_root);

			for (auto x : roots) {
				cout << x << " ";
			}
		} else {
			if (B != 0) {
				cout << (-1) * C / B;
			}
		}
	}

	return 0;
}