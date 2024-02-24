#include "Complex.h"
using namespace std;

int main()
{
	Complex first, second, Sub, Div, Conj;
	first.Read();
	first.Display();

	second.Read();
	second.Display();

	Sub = Complex::sub(first, second);
	Div = Complex::div(first, second);
	Conj = Complex::conj(first);

	cout << "sub = (" << first.toString() << ") - (" << second.toString() << ") = " << Sub.toString() << endl;
	cout << "div = (" << first.toString() << ") / (" << second.toString() << ") = " << Div.toString() << endl;
	cout << "conj(first) = " << Conj.toString() << endl;


	cin.get();
	return 0;
}