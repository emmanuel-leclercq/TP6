#include <iostream>
#include <vector>
#include <complex>

template <typename T>
class Polynome;

template <typename T>
std::ostream &operator<<(std::ostream &os, const Polynome<T> &p);

template <typename T>
bool is_zero(T a)
{
	return a == 0;
};
bool is_zero(double a) { return a == 0; };

template <typename T>
bool is_zero(std::complex<T> a) { return a.real() == 0 && a.imag() == 0; };

template <typename T>
bool is_one(T a)
{
	return a == 1;
};
bool is_one(double a) { return a == 1; };

template <typename T>
bool is_one(std::complex<T> a)
{
	return a.real() == 1 && a.imag() == 0;
};

template <typename T>
class Polynome
{
private:
	int n;
	T *coeff;

public:
	Polynome() : n(0), coeff(nullptr){};
	Polynome(const T &a, int m) : n(m), coeff(new T[1]) { coeff[0] = a; };
	Polynome(std::vector<T> v) : n(v.size()), coeff(new T[n])
	{
		for (int i = 0; i < n; i++)
			coeff[i] = v[i];
	};
	int degre() const { return n; };

	Polynome operator[](int i)
	{
		if (i >= 0 && i <= n)
		{
			return coeff[i];
		}
		else
		{
			throw "Index out of range";
		}
	};

	std::ostream affiche_monome(std::ostream &os, const T a, int i)
	{
		if (a != 0)
		{
			return os << a << "x^" << i;
		}
		else
		{
			return os;
		}
	};

	friend std::ostream &operator<< <T>(std::ostream &os, const Polynome<T> &p)
	{
		for (int i = 0; i < p.n; i++)
		{
			p.affiche_monome(os, coeff[i], i);
		}
		return os;
	};
};