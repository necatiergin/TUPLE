#include <tuple>
#include <string>
#include <iostream>

int main()
{
	using namespace std;
	
	tuple<int, double, string> tx;

	cout << get<0>(tx) << "\n";
	cout << get<1>(tx) << "\n";
	cout << get<2>(tx).size() << "\n";
	//get<3>(tx)  //gecersiz
}
