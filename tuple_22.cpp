#include <iostream>
#include <tuple>

template<typename... Ts>
std::ostream& operator<<(std::ostream& os, std::tuple<Ts...> const& tx)
{
    std::apply
    (
        [&os](Ts const& ...tupleArgs)
        {
            os << '[';
            std::size_t n{ 0 };
            ((os << tupleArgs << (++n != sizeof...(Ts) ? ", " : "")), ...);
            os << ']';
        }, tx
    );
    return os;
}

int main()
{
   std::cout << std::tuple{ 43, 5.6, "necati", 'A' } << '\n';
}
