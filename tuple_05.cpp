#include <tuple>
#include <iostream>
#include <type_traits>

int main()
{
	auto t = std::make_tuple(12, 2.3, 34L);

	std::cout << typeid(t).name() << '\n';
	using type = std::tuple<int, double, long>;
	constexpr bool b = std::is_same_v<type, decltype(t)>;  //true
}
