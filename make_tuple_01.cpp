#include <tuple>
#include <iostream>

using namespace std;

int main()
{
	auto t = make_tuple(12, 2.3, 34L);

	cout << typeid(t).name() << "\n";
}
