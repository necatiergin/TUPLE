#include <tuple>

using tpl = std::tuple<int, double, char>;

int main()
{
	//constexpr auto size = std::tuple_size<tpl>::value;
	constexpr auto size = std::tuple_size_v<tpl>; 	 // 3
}
