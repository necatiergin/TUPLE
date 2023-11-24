#include <string>
#include <iostream>
#include <tuple>

int main()
{
	using namespace std;

	int x = 23;
	double dval = 5;
	string str = "Mehmet";

	auto t = tie(x, dval, str);

	++get<0>(t);
	get<1>(t) *= 2.5;
	get<2>(t) += "can";

	cout << "x = " << x << '\n';
	cout << "dval = " << dval << '\n';
	cout << "str = " << str << '\n';
}
