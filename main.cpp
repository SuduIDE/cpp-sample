#include <iostream>

#include "main.h"
#include "B.h"

bool bar1() { return true; }

bool foo2() {
    return bar1();
}

int foo3() {
    return bar1();
}

// comment with chinese 语言支持
extern const char* getVersion();

int main() {
    std::cout << "Hello World! ";
    bar1();

    A* a = new A();
    std::cout << a->foo();
    delete a;

    A* b = new B();
    std::cout << b->foo();
    delete b;

    foo2();
    foo3();

    std::cout << getVersion();

    return 0;
}
