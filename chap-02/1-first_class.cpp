#include <iostream>

class Person
{
private:
    std::string  _name;
    unsigned int _age = 0u;

public:
    void set_name(const std::string& name) { _name = name; }

    void set_age(unsigned int age) { _age = age; }

    const std::string& get_name() const { return _name; }

    unsigned int get_age() const { return _age; }
};

class Toto
{
public:
    Toto()
        : _value1(3)
        , _value2(5)
    {}

    Toto(const int v1)
        : _value1(v1)
    {}

private:
    int _value1;
    int _value2;
};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

    std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
