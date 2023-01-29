#include <array>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>

enum Fruit
{
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    std::array<std::string, Fruit_Count> array;
    array[Apricot]   = "apricot";
    array[Cherry]    = "cherry";
    array[Mango]     = "mango";
    array[Raspberry] = "raspberry";
}

void try_lists()
{
    std::list<int> l1;
    std::list<int> l2;
    std::list<int> l3;
    std::list<int> l4 = { 7, 8, 9 };

    l1.assign({ 0, 1, 2 });
    l2.assign(3, 3);
    l3.emplace_back(4);
    l3.emplace_back(5);
    l3.emplace_back(6);

    l1.sort();
    l2.sort();
    l1.merge(l2);

    l3.sort();
    l4.sort();
    l3.merge(l4);

    for (auto l : l1)
    {
        std::cout << l << std::endl;
    }

    auto mid = l1.begin();
    std::advance(mid, l1.size() / 2);
    l1.splice(mid, l3);
}

void try_stacks()
{
    std::stack<int, std::vector<int>> stack;
    stack.emplace(0);
    stack.emplace(1);
    stack.emplace(2);
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}