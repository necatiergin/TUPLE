#include <tuple>

using tpl = std::tuple<int, double, char>;

int main()
{
	using namespace std;

	//constexpr auto size = tuple_size<tpl>::value;
	constexpr auto size = tuple_size_v<tpl>;
}
