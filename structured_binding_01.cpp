#include <string>
#include <tuple>
#include "date.h"

std::tuple<int, double, std::string, Date>
func(void)
{
	using namespace std::literals;
	//...
	return std::make_tuple(12, 3.4, "helin"s, Date{ 1, 1, 2020 });
}

int main()
{
	using namespace std;

	auto [ival, dval, name, bdate] = func();

	std::cout << "ival = " << ival << '\n';
	std::cout << "dval = " << dval << '\n';
	std::cout << "str = " << name << '\n';
	std::cout << "mydate = " << bdate << '\n';
}
