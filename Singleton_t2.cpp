#include "Singleton_t2.hpp"
#include <iostream>

Singleton_t2* Singleton_t2::instance = new Singleton_t2();

Singleton_t2* Singleton_t2::get_instance() {
    return instance;
}

Singleton_t2::Singleton_t2()
{
    std::cout << "��������ʽʵ���ɹ���";
}

Singleton_t2::~Singleton_t2()
{
    if (instance != nullptr) {
        delete instance;
        instance = nullptr;
    }
}