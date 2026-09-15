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

    // Intentional error for the first stage of the laboratory work:
    // valid indices are 0, 1 and 2, but value_count is equal to 3.
    const std::size_t invalid_index = value_count;

    std::cout << "Value: " << values[invalid_index] << '\n';
    return 0;
}
