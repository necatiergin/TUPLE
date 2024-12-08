#include <string>
#include "date.h" //see the header
#include <iostream>

using id = int;
using name = std::string;
using birth_date = Date;

int main()
{
	std::tuple<id, name, birth_date> tx{ 20, "hakki", Date{12, 5, 1987} };

	std::cout << get<id>(tx) << '\n';
	std::cout << get<name>(tx) << '\n';
	std::cout << get<birth_date>(tx) << '\n';
}
