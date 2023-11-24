#include <iostream>
#include <tuple>
#include <string>

int main()
{
	int ival{ 34 };
	double dval{ 9.1 };
	std::string name{ "necati" };

	std::tuple tx{ ival, dval, name }; //CTAD

	std::cout << get<0>(tx) << " " << get<1>(tx) << " " << get<2>(tx) << "\n";
}
