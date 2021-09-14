#pragma once

//����ʽ
class Singleton_t {
public:
    //�ṩһ��get_instance�ķ��������ⲿ������������Ψһʵ����
    static Singleton_t* get_instance();

private:
    //�ⲿ���ù��캯��,���ƹ��캯��,��ֵ����
    Singleton_t();
    ~Singleton_t();
    Singleton_t(const Singleton_t&) = delete;
    Singleton_t &operator =(Singleton_t&s) =delete;

    static Singleton_t* instance;
};

