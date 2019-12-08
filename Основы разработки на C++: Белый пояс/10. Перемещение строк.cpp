/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
Напишите функцию MoveStrings, которая принимает два вектора 
строк, source и destination, и дописывает все  строки из 
первого вектора в конец второго. После выполнения функции 
вектор source должен оказаться пустым.

Чтобы очистить содержимое вектора, надо вызвать у него метод clear:
vector<string> words = {"hey", "hi"};
words.clear();
// Теперь вектор words пуст
*/
void MoveStrings( vector<string>& source, 
						   							vector<string>& destination ) {
	for (auto s : source) {
		destination.push_back(s);
	}
	source.clear();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	// Здесь ничего не делаем

	return 0;
}