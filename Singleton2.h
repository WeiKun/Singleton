#ifndef SINGLETTON_HPP
#define SINGLETTON_HPP

template <class T>
class Singleton
{
public:
    static T &GetInstance()
    {
        return instance;
    }

    static T instance;
};

template <class T>
T Singleton<T>::instance;

#endif
