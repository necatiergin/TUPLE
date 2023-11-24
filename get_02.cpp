#include <tuple>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	tuple<int, double, string> tx{ 12, 5.7, "alican" };

	cout << get<0>(tx) << "\n";
	cout << get<1>(tx) << "\n";
	cout << get<2>(tx) << "\n";
}
