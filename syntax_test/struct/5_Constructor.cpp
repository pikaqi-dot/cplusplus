#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;

    // 构造函数
    Person(const std::string& n, int a) : name(n), age(a) {}

    void introduce() {
        std::cout << "Hi, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    // 使用构造函数创建对象
    Person person("Alice", 30);
    person.introduce();

    return 0;
}
