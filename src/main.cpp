#include <cstddef>
#include <iostream>
#include <memory>

int main()
{
    constexpr std::size_t value_count = 3;
    const auto values = std::make_unique<int[]>(value_count);

    values[0] = 10;
    values[1] = 20;
    values[2] = 30;

    // The last valid index is one less than the number of elements.
    const std::size_t last_index = value_count - 1;

    std::cout << "Value: " << values[last_index] << '\n';
    return 0;
}
