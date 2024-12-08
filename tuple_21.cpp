#include <tuple>
#include <iostream>

void func(int &i, double&d, std::string& s)
{
	i += 100;
	d *= 3.;
	s += "can";
}

int main()
{
	using namespace std::literals;

	std::tuple t{12, 4.5, "hasan"s}; //CTAD

	std::apply(func, t);

	std::cout << get<0>(t) << '\n';
	std::cout << get<1>(t) << '\n';
	std::cout << get<2>(t) << '\n';
}
