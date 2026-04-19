#ifndef templateNamespace
#define templateNamespace

#include <iostream>
#include <iomanip>

namespace TemplateNamespace
{
	const double test_constant_nm{ 3.14159 };
	template<typename T>
	T add(T a, T b)
	{
		return a + b;
	}
	template<typename T>
	T multiply(T a, T b)
	{
		return a * b;
	}
}
#endif // !templateNamespace