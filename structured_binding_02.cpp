#include <string>
#include <tuple>
#include <iostream>

#include "date.h"

std::tuple<int, double, std::string, Date>
func()
{
	using namespace std::literals;
	//...
	return std::make_tuple(12, 3.4, "helin"s, Date{ 1, 1, 2020 });
}

int main()
{
	if (auto [ival, dval, name, bdate] = func(); name == "helin") {
		std::cout << ival << " " << dval << " " << bdate << '\n';
	}
}
