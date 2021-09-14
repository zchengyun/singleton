#pragma once
class Singleton_t2
{
public:
    //提供一个get_instance的方法，让外部来访问这个类的唯一实例。
    static Singleton_t2* get_instance();

private:
    //外部禁用构造函数,复制构造函数,赋值运算
    Singleton_t2();
    ~Singleton_t2();
    Singleton_t2(const Singleton_t2&) = delete;
    Singleton_t2& operator =(Singleton_t2& s) = delete;

    static Singleton_t2* instance;
};

