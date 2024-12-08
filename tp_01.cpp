//default ctor - get<>

#include <tuple>
#include <string>
#include <iostream>

int main()
{
	std::tuple<int, double, std::string> tp;

	std::cout << get<0>(tp) << '\n';
	std::cout << get<1>(tp) << '\n';
	std::cout << get<2>(tp).size() << '\n';
	//get<3>(tp)  //error
}
