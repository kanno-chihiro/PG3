#include <stdio.h>

template<typename T, typename T2>

class Number
{
public:

	T number;
	T number2;

	Number(T number, T number2) : number(number), number2(number2) {}

	T Min(T a, T b)
	{
		if (a < b)
		{
			return static_cast<T>(a);
		}
		else
		{
			return static_cast<T>(b);
		}
	}

};

int main()
{
	Number<int, int> b1(11, 51);
	Number<float, float> b2(11, 51);
	Number<double, double> b3(11, 51);
	Number<int, float> b4(11, 51);
	Number<float, double> b5(11, 51);
	Number<double, int> b6(11, 51);


	printf("int,int : %d\n", b1.Min(1, 15));
	printf("float,float : %f\n", b2.Min(4.0, 12.0));
	printf("double,double : %lf\n", b3.Min(2.0, 6.0));

	printf("int, float : %d\n", b4.Min(5, 13.0));
	printf("float, double : %f\n", b5.Min(23.0, 43.0));
	printf("double, int : %lf\n", b6.Min(56.0, 33));

	return 0;
}