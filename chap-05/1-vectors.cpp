#include <iostream>
#include <vector>

int main()
{
    int              array[] = { 0, 1, 2, 3, 4, 5 };
    std::vector<int> values(&array[0], &array[6]);
    for (auto value : values)
    {
        std::cout << value << std::endl;
    }
    return 0;
}