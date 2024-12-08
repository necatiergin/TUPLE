#include <string>
#include <tuple>
#include "date.h"

std::tuple<int, double, std::string, Date>
func()
{
	using namespace std::literals;
	//...
	return std::make_tuple(12, 3.4, "necati"s, Date{ 1, 1, 2020 });
}

int main()
{
	int ival;
	double dval;
	std::string str;
	Date mydate;

	tie(ival, dval, str, mydate) = func();

	std::cout << "ival = " << ival << '\n';
	std::cout << "dval = " << dval << '\n';
	std::cout << "str = " << str << '\n';
	std::cout << "mydate = " << mydate << '\n';
}
