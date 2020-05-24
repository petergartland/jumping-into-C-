
template <typename T> class ArrayWrapper
{
public:
	ArrayWrapper(int size);
//private:
	T *p_mem;
};

template <typename T>
ArrayWrapper<T>::ArrayWrapper(int size)
{
	p_mem = new T[size];
}



template <typename T>
class Calc
{
public:
	Calc();
	T multiply(T x, T y);
	T add(T x, T y);
};

template <typename T>
Calc<T>::Calc()
{
}


template <typename T>
T Calc<T>::multiply(T x,T y)
{
	return x*y;
}


template <typename T>
T Calc<T>::add(T x,T y)
{
	return x+y;
}



