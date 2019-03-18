#ifndef SINGLETTON_HPP
#define SINGLETTON_HPP

template <class T>
class Singleton
{
public:
    class InnerCreator
    {
    public:
        InnerCreator()
        {
            Singleton<T>::GetInstance();
        }
        inline void do_nothing() const {}
    };

    static T &GetInstance()
    {
        static T instance;
        creator.do_nothing();
        return instance;
    }

    static InnerCreator creator;
};

template <class T>
typename Singleton<T>::InnerCreator
Singleton<T>::creator __attribute__((used));

#endif
