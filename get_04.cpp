#include <string>
#include "date.h" //kendi modülümüz
#include <iostream>


using id = int;
using name = std::string;
using birth_date = Date;

int main()
{
	using namespace std;

	tuple<id, name, birth_date> tx{ 20, "hakki", Date{12, 5, 1987} };

	cout << get<id>(tx) << "\n";
	cout << get<name>(tx) << "\n";
	cout << get<birth_date>(tx) << "\n";
}
