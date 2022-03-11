#include <iostream>

class Animal {
    virtual void display() {}
};

class Dog : Animal {
public:
    virtual void display() {
        std::cout << "Dog!!!" << std::endl;
    }
};

class Cat : Animal {
public:
    virtual void display() {
        std::cout << "Cat!!!" << std::endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Dog dog;
    dog.display();

    Cat cat;
    cat.display();
    return 0;
}
