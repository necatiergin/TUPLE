#include <array>
#include <tuple>

int main()
{
	using ar_5i = std::array<int, 5>;

	//std::tuple_element<0, ar_5i>::type x{}; //int x{};
	std::tuple_element_t<0, ar_5i>x{}; //int x{};
}
