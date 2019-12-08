/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
Напишите функцию UpdateIfGreater, которая принимает два 
целочисленных аргумента: first и second. Если first оказался 
больше second, Ваша функция должна записывать в second значение 
параметра first. При этом указанная функция не должна ничего 
возвращать, а изменение параметра second должно быть видно 
на вызывающей стороне
*/
void UpdateIfGreater(int a, int& b) {
	if (a > b) {
		b = a;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	// Здесь мы ничего не делаем

	return 0;
}