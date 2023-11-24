#include <array>
#include <tuple>

class Date{
public:

private:
	int m_day, m_mon, m_year;
};


template <>
struct std::tuple_size<Date>
{
	static constexpr std::size_t value{3u};
};

template <>
constexpr std::size_t std::tuple_size_v<Date> = std::tuple_size<Date>::value;


int main()
{
	//constexpr auto n = std::tuple_size<Date>::value;
	constexpr auto n = std::tuple_size_v<Date>;
}

