#include <string>
#include <iostream>
#include <tuple>

int main()
{
	using namespace std;

	int x = 23;
	double dval = 5;
	string str{ "Mehmet" };

	tuple<int&, double&, string&> t(x, dval, str);
	//auto t = tie(x, dval, str);

	get<0>(t) += 10;
	get<1>(t) += 2.43;
	get<2>(t) += "can";
	cout << "x = " << x << '\n';
	cout << "dval = " << dval << '\n';
	cout << "str = " << str << '\n';
}
