#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    /*int              array[] = { 0, 1, 2, 3, 4, 5 };
    std::vector<int> vector(array, array + 6);
    for (size_t first = 0, last = vector.size() - 1; first < last; first++, last--)
    {
        std::swap(vector[first], vector[last]);
    }
    for (auto elem : vector)
    {
        std::cout << elem << std::endl;
    }
    std::vector<int> vector { 1, 2, 3 };
    for (auto it = vector.begin(); it != vector.end(); it += 2)
    {
        it = vector.insert(it, *it);
    }
    for (auto elem : vector)
    {
        std::cout << elem << std::endl;
    }*/

    std::vector<int> vector { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    auto             find = std::find(vector.begin(), vector.end(), 9);
    vector.erase(find);
    vector.assign({ 0, 2, 32, -4, 3 });
    vector.clear();
    for (auto elem : vector)
    {
        std::cout << elem << std::endl;
    }
    return 0;
}