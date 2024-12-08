#include <tuple>

using tpl = std::tuple<int, double, char>;

int main()
{
	//std::tuple_element<0, tpl>::type x{}; //int x{};
	std::tuple_element_t<0, tpl> x{}; //int x{};

	//std::tuple_element<1, tpl>::type y{}; //double y{};
	std::tuple_element_t<1, tpl> y{}; //double y{};

	//tuple_element<2, tpl>::type z{}; //char z{};
	std::tuple_element_t<2, tpl> z{}; //char z{};

	//std::tuple_element_t<3, tpl> m{}; //error
}
