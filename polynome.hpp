

template <typename T>
bool is_zero(T a)
{
	return a == 0
}
bool is_zero(double a) { return a == 0; }

template <typename T>
bool is_one(T a)
{
	return a == 1;
}
bool is_one(double a) { return a == 1; }

template <typename T>
bool is_one(complex<T>)
{
	return a.first == 0 && a.second == 0;
};

template <typename T>
class Polynome
{
	private:
		int n;
		T* coeff;

	public:
		Polynome(int n, T* coeff);
		Polynome(const Polynome& p);
		~Polynome(): n(0), coeff(nullptr) {};

		Polynome& operator=(const Polynome& p);
		Polynome operator+(const Polynome& p);
		Polynome operator-(const Polynome& p);
		Polynome operator*(const Polynome& p);
		Polynome operator/(const Polynome& p);
		Polynome operator%(const Polynome& p);
		Polynome operator^(int n);
		Polynome operator-();

		Polynome& operator+=(const Polynome& p);
		Polynome& operator-=(const Polynome& p);
		Polynome& operator*=(const Polynome& p);
		Polynome& operator/=(const Polynome& p);
		Polynome& operator%=(const Polynome& p);
		Polynome& operator^=(int n);

		bool operator==(const Polynome& p);
		bool operator!=(const Polynome& p);

		T operator()(T x);
		T operator[](int i);

		int degree();
		Polynome derivative();
		Polynome integral();
		Polynome gcd(const Polynome& p);
		Polynome lcm(const Polynome& p);
		Polynome gcdex(const Polynome& p, Polynome& u, Polynome& v);
		Polynome gcdex(const Polynome& p, Polynome& u, Polynome& v, Polynome& w);
		Polynome gcdex(const Polynome& p, Polynome& u, Polynome& v, Polynome& w, Polynome& x);
		Polynome gcdex(const Polynome& p, Polynome& u, Polynome& v, Polynome& w, Polynome& x, Polynome& y);
		Polynome gcdex(const Polynome& p, Polynome& u, Polynome& v, Polynome& w, Polynome& x, Polynome& y, Polynome& z);
		Polyn
};
