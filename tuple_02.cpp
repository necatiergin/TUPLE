#include <tuple>
#include <iostream>
#include <string>
#include "date.h"  //see the header

int main()
{
	std::tuple<int, double, std::string, Date> t{ 12, 4.5, "Necati", Date{3, 5, 2020} };

	std::cout << get<0>(t) << '\n';
	std::cout << get<1>(t) << '\n';
	std::cout << get<2>(t) << '\n';
	std::cout << get<3>(t) << '\n';
	std::cout << "\n\n";
	std::cout << get<int>(t) << '\n';
	std::cout << get<double>(t) << '\n';
	std::cout << get<std::string>(t) << '\n';
	std::cout << get<Date>(t) << '\n';
}
