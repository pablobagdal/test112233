#include<iostream>

// В функциональных языках программирования говорят, что функтор - это
// замыкание. Т.е. на функции замкнуты какие-то значения.

// По сути функторы могут сохранять состояние, т.е. иметь поля(в отличие от
// функций)

class SimpleFunctor {
    std::string name_;
    int count_;

public:
    SimpleFunctor(char *name, int count) : name_(name), count_(count) {}
    // the class becomes "functor" because of the next method "operator()"
    // it make an class's object available to behave as a function
    void operator()(char *extraText) 
    {
        std::cout << 
        "Hello, world. I'm " << 
        name_ << 
        " " << 
        count_ <<
        ". Nice to see you. (" <<
        extraText <<
        ")" <<
        std::endl;
    }
};

int main(int argc, char const *argv[])
{
    SimpleFunctor sf("Human", 24);
    sf("bro");
    return 0;
}
