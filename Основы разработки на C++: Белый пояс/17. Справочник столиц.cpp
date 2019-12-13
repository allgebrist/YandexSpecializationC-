/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

/*
Реализуйте справочник столиц стран.

На вход программе поступают следующие запросы:
- CHANGE_CAPITAL country new_capital — изменение столицы страны 
country на new_capital, либо добавление такой страны с такой 
столицей, если раньше её не было.
- RENAME old_country_name new_country_name — переименование 
страны из old_country_name в new_country_name.
- ABOUT country — вывод столицы страны country.
- DUMP — вывод столиц всех стран.

Формат ввода:
В первой строке содержится количество запросов Q, в следующих Q 
строках — описания запросов. Все названия стран и столиц состоят 
лишь из латинских букв, цифр и символов подчёркивания.

Формат вывода:
Выведите результат обработки каждого запроса:

В ответ на запрос CHANGE_CAPITAL country new_capital выведите:
- Introduce new country country with capital new_capital, если 
страны country раньше не существовало;
- Country country hasn't changed its capital, если страна country 
до текущего момента имела столицу new_capital;
- Country country has changed its capital from old_capital to new_capital, 
если страна country до текущего момента имела столицу old_capital, 
название которой не совпадает с названием new_capital.

В ответ на запрос RENAME old_country_name new_country_name выведите:
- Incorrect rename, skip, если новое название страны совпадает 
со старым, страна old_country_name не существует или страна 
new_country_name уже существует;
- Country old_country_name with capital capital has been renamed to new_country_name, 
если запрос корректен и страна имеет столицу capital.

В ответ на запрос ABOUT country выведите:
- Country country doesn't exist, если страны с названием 
country не существует;
- Country country has capital capital, если страна country 
существует и имеет столицу capital.

В ответ на запрос DUMP выведите:
- There are no countries in the world, если пока не было 
добавлено ни одной страны;
- последовательность пар вида country/capital, описывающую 
столицы всех стран, если в мире уже есть хотя бы одна страна. 
При выводе последовательности пары указанного вида необходимо 
упорядочить по названию страны и разделять между собой пробелом.
*/

#define MAX 1000003
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	map<string, string> all_capitals;

	int Q;
	cin >> Q;

	while (Q--) {
		string query;
		cin >> query;

		if (query == "CHANGE_CAPITAL") {
			string country, new_capital;
			cin >> country >> new_capital;
			if (all_capitals.find(country) == all_capitals.end()) {
				all_capitals[country] = new_capital;
				cout << "Introduce new country " << country << " with capital " << new_capital << endl;
			} else if (all_capitals[country] == new_capital) {
				cout << "Country " << country << " hasn't changed its capital" << endl; 
			} else if (all_capitals[country] != new_capital) {
				cout << "Country " << country << " has changed its capital from " << all_capitals[country] << " to " << new_capital << endl;
				all_capitals[country] = new_capital;
			}
		} else if (query == "RENAME") {
			string old_country_name, new_country_name;
			cin >> old_country_name >> new_country_name;
			bool admissible = true;
			if (all_capitals.find(old_country_name) == all_capitals.end()) {
				// страна old_country_name не существует
				admissible = false;
			} else if (all_capitals.find(new_country_name) != all_capitals.end()) {
				// страна new_country_name уже существует
				admissible = false;
			} else if (old_country_name == new_country_name) {
				// новое название страны совпадает со старым
				admissible = false;
			}

			if (admissible) {
				cout << "Country " << old_country_name << " with capital " << all_capitals[old_country_name] << " has been renamed to " << new_country_name << endl;
				string old_capital = all_capitals[old_country_name];
				all_capitals.erase(old_country_name);
				all_capitals[new_country_name] = old_capital;
			} else {
				cout << "Incorrect rename, skip" << endl;
			}
		} else if (query == "ABOUT") {
			string country;
			cin >> country;
			if (all_capitals.find(country) == all_capitals.end()) {
				cout << "Country " << country << " doesn't exist" << endl;
			} else {
				cout << "Country " << country << " has capital " << all_capitals[country] << endl;
			}
		} else if (query == "DUMP") {
			if (all_capitals.size() == 0) {
				cout << "There are no countries in the world" << endl;
			} else {
				for (auto x : all_capitals) {
					cout << x.first << "/" << x.second << " ";
				}
				cout << endl;
			}
		}
	}

	return 0;
}