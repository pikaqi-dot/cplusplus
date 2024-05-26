#include <iostream>
struct MyStruct {
    int publicMember; // 默认是public
};

class MyClass {
    int privateMember; // 默认是private
public:
    void setPrivateMember(int value) {
        privateMember = value;
    }
    int getPrivateMember() {
        return privateMember;
    }
};

int main() {
    MyStruct s;
    s.publicMember = 10; // 可以直接访问

    MyClass c;
    // c.privateMember = 20; // 错误，不能直接访问private成员
    c.setPrivateMember(20); // 通过公有成员函数访问private成员
    std::cout << "Private member of class: " << c.getPrivateMember() << std::endl;

    return 0;
}
