#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "Expected argument for array size." << std::endl;
        return -1;
    }
    int array_size = std::stoi(argv[1]);
    if (array_size <= 0)
    {
        std::cerr << "Expected strictly positive value for array size." << std::endl;
        return -1;
    }

    std::vector<int> array;

    for (int i = 0; i < array_size; ++i)
    {
        array.emplace_back(i + 1);
    }

    for (int value : array)
    {
        std::cout << value << std::endl;
    }

    return 0;
}