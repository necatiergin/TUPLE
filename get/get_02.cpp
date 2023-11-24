#include <tuple>
#include <iostream>
#include <string>
#include "date.h"  //kendi modülümüz

int main()
{
	using namespace std;

	tuple<int, double, string, Date> t{ 12, 4.5, "Necati", Date{3, 5, 2020} };

	cout << get<0>(t) << '\n';
	cout << get<1>(t) << '\n';
	cout << get<2>(t) << '\n';
	cout << get<3>(t) << '\n';
	std::cout << "\n\n";
	cout << get<int>(t) << '\n';
	cout << get<double>(t) << '\n';
	cout << get<string>(t) << '\n';
	cout << get<Date>(t) << '\n';
}
