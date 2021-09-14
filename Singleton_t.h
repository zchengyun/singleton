#pragma once

//懒汉式
class Singleton_t {
public:
    //提供一个get_instance的方法，让外部来访问这个类的唯一实例。
    static Singleton_t* get_instance();

private:
    //外部禁用构造函数,复制构造函数,赋值运算
    Singleton_t();
    ~Singleton_t();
    Singleton_t(const Singleton_t&) = delete;
    Singleton_t &operator =(Singleton_t&s) =delete;

    static Singleton_t* instance;
};

