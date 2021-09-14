#include "Singleton_t.h"
#include <iostream>

Singleton_t* Singleton_t::instance = nullptr;

Singleton_t* Singleton_t::get_instance() {
    if (instance == nullptr) {
        instance = new Singleton_t();
        std::cout << "创建懒汉式实例成功!" ;
    }
    return instance;
}

Singleton_t::Singleton_t()
{
}

Singleton_t::~Singleton_t()
{
    if (instance != nullptr) {
        delete instance;
        instance = nullptr;
    }
}
