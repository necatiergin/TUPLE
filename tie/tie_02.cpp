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

	int ival;
	double dval;
	string str;
	Date mydate;

	tie(ival, dval, str, mydate) = func();

	cout << "ival = " << ival << '\n';
	cout << "dval = " << dval << '\n';
	cout << "str = " << str << '\n';
	cout << "mydate = " << mydate << '\n';
}
