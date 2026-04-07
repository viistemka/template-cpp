#include <iostream>
#include <iomanip>

namespace TemplateNamespace
{
	constexpr double test_constant = 3.14159;
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