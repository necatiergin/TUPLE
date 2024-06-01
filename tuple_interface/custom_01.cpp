#include <array>
#include <tuple>
#include <type_traits>

class Date {
public:

private:
	int m_day, m_mon, m_year;
};

template<std::size_t N>
struct std::tuple_element<N, Date>
{
	static_assert(N < 3);
	using type = int;
};


template <>
struct std::tuple_size<Date>
{
	static constexpr std::size_t value{ 3u };
};


int main()
{
	//constexpr auto n = std::tuple_size<Date>::value;
	constexpr auto n = std::tuple_size_v<Date>;
	
	static_assert(std::is_same_v<std::tuple_element_t<0, Date>, int>);
	static_assert(std::is_same_v<std::tuple_element_t<1, Date>, int>);
	static_assert(std::is_same_v<std::tuple_element_t<2, Date>, int>);
	
}
