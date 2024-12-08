#include <string>
#include <iostream>
#include <tuple>

int main()
{
	int x = 23;
	double dval = 5;
	std::string str = "Mehmet";

	auto t = tie(x, dval, str);

	++get<0>(t);
	get<1>(t) *= 2.5;
	get<2>(t) += "can";

	std::cout << "x = " << x << '\n';
	std::cout << "dval = " << dval << '\n';
	std::cout << "str = " << str << '\n';
}
