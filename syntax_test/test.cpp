#include <iostream>
#include <string>

// 定义一个表示人的struct
struct Person {
    std::string name;
    int age;

    // 成员函数
    void introduce() {
        std::cout << "Hi, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    // 创建一个Person对象
    Person person;
    person.name = "Alice";
    person.age = 30;

    // 调用成员函数
    person.introduce();

    return 0;
}
