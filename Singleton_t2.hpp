#pragma once
class Singleton_t2
{
public:
    //�ṩһ��get_instance�ķ��������ⲿ������������Ψһʵ����
    static Singleton_t2* get_instance();

private:
    //�ⲿ���ù��캯��,���ƹ��캯��,��ֵ����
    Singleton_t2();
    ~Singleton_t2();
    Singleton_t2(const Singleton_t2&) = delete;
    Singleton_t2& operator =(Singleton_t2& s) = delete;

    static Singleton_t2* instance;
};

