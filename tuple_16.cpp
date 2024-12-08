#include <iostream>
#include <tuple>

int main()
{
	std::tuple tp{ 12, 3.4, 'A' };
	int ival{};
	double dval{};

	tie(ival, dval, std::ignore) = tp;

	std::cout << ival << " " << dval << '\n';
}
