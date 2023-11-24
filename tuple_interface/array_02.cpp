#include <array>
#include <tuple>

int main()
{
	using ar_5i = std::array<int, 5>;
	//constexpr auto size = std::tuple_size<ar_5i>::value;
	constexpr auto size = std::tuple_size_v<ar_5i>;  //size => 5u
}

