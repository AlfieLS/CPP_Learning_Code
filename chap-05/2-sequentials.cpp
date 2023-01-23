#include <array>
#include <iostream>
#include <list>

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
    std::array<std::string, Fruit_Count> fruit_names;
    fruit_names[Apricot]   = "apricot";
    fruit_names[Cherry]    = "cherry";
    fruit_names[Mango]     = "mango";
    fruit_names[Raspberry] = "raspberry";
}

void try_lists()
{
    std::list<int> l1;
    std::list<int> l2;
    std::list<int> l3;
    std::list<int> l4;
    l1.assign(5, 1);
    l2.assign(5, 2);
    l3.assign(5, 3);
    l4.assign(5, 4);
    for (auto v : l1)
    {
        std::cout << v << std::endl;
    }
}

void try_stacks()
{
    // Implement stack tests here.
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}