#include <iostream>
#include "Singleton_t.h"
#include "Singleton_t2.hpp"
//单例模式，懒汉式与饿汉式

/*懒汉式:即将使用时才会创建，支持延迟加载，被频繁使用的资源缓存到内存。
操作时先到内存里面找，有就直接使用，没有就获取它并设置到缓存中，下次直接从内存获取，节省大量的时间*/

int main()
{
    auto instance1 = Singleton_t::get_instance();
    auto instance2 = Singleton_t2::get_instance();
}

