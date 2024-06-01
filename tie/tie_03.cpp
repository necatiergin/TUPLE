#include <iostream>
#include <tuple>

int main()
{
	using namespace std;

	tuple tp{ 12, 3.4, 'A' };
	int ival{};
	double dval{};

	tie(ival, dval, ignore) = tp;

	cout << ival << " " << dval << '\n';
}
