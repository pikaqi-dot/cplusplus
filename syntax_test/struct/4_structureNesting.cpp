#include <iostream>

struct Address {
    std::string city;
    std::string state;
};

struct Person {
    std::string name;
    int age;
    Address address;
};

int main() {
    Person person = {"John Doe", 25, {"New York", "NY"}};

    std::cout << person.name << " lives in " << person.address.city << ", " << person.address.state << std::endl;

    return 0;
}
