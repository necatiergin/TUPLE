#include <tuple>

using tpl = std::tuple<int, double, char>;

int main()
{
	using namespace std;

	//tuple_element<0, tpl>::type x{}; //int x{};
	tuple_element_t<0, tpl> x{}; //int x{};

	//tuple_element<1, tpl>::type y{}; //double y{};
	tuple_element_t<1, tpl> y{}; //double y{};

	//tuple_element<2, tpl>::type z{}; //char z{};
	tuple_element_t<2, tpl> z{}; //char z{};
	
	//tuple_element_t<3, tpl> m{}; //sentaks hatası
}
