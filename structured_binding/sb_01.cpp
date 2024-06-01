#include <string>
#include <tuple>
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
	using namespace std;

	auto [ival, dval, name, bdate] = func();

	cout << "ival = " << ival << '\n';
	cout << "dval = " << dval << '\n';
	cout << "str = " << name << '\n';
	cout << "mydate = " << bdate << '\n';
}
