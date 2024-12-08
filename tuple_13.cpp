#include <array>
#include <tuple>
#include <type_traits>

int main()
{
	using ptype = std::pair<int, double>;

	constexpr auto sz = std::tuple_size_v<ptype>; //2u

	std::tuple_element_t<0, ptype> i{}; //int i{}
	std::tuple_element_t<1, ptype> d{}; //double d{}
}
