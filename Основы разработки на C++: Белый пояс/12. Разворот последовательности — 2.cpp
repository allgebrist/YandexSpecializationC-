/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
Реализуйте функцию vector<int> Reversed(const vector<int>& v), 
возвращающую копию вектора v, в которой числа переставлены в 
обратном порядке.
*/
// Решение с Two-Pointers
vector<int> Reversed(const vector<int>& v) {
	vector<int> v_copy(v.size());
	if (v.size() != 0 && v.size() != 1) {
		int i = 0, j = v.size()-1;
		while (i < v.size()) {
			v_copy[i] = v[j];
			i++;
			j--;
		}
	} else {
		v_copy = v;
	}
	return v_copy;
}

/*
Простое решение с push_back:
vector<int> Reversed(const vector<int>& input)
{
    vector<int> result;
    for (int i = input.size() - 1; i >= 0; --i) {
        result.push_back(input[i]);
    }
    return result;
}
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	return 0;
}