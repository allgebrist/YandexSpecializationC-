/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
Напишите функцию, которая
- называется Factorial
- возвращает int
- принимает int и возвращает факториал своего аргумента. 
Гарантируется, что аргумент функции по модулю не превышает 10. 
Для отрицательных аргументов функция должна возвращать 1.
*/

int Factorial(int n) {
	if (n <= 1) {return 1;}
	return n * Factorial(n-1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	cout << Factorial(n);	

	return 0;
}