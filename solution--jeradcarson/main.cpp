#include <iostream>
#include <cmath>
using std::endl;
using std::cout;
using std::cin;

/* Part 1 */

/* Part 2 */

template <typename Num> // Template declaration

Num addFive(Num number) { // Function named modulusFive within the Num template
	number += 5; // It does exactly what it says on the tin
	return number;
}

int part2() {
	

	system("pause");
	return 0;
}

/* Part 3 */



/* Part 4 */

int gcd(int a, int b) {
	// base case

	if (a < 0) {
		a = abs(a);
	}

	if (b < 0) {
		b = abs(b);
	}

	if (a == 0) {
		return b;
	}

	else if (b == 0) {
		return a;
	}

	// recursive case

	else if (a > b) {
		return gcd(a - b, b);
	}

	else {
		return gcd(a, b - a);
	}
}

/* int fib(int n) {
	// check for valid input
	if (n < 1) throw "Invalid input.";

	// base case
	if (n == 1) return 1;

	if (n == 2) return 1;

	// recursive case
	return (fib(n - 1) + fib(n - 2));

} 
For some reason, this part of our code wasn't working. */

// iterative triangular number function

int tri(int n) {
	int i = n;
	if (n > 0) {
		n = (i * i + i) / 2;
	}
	return n;
}

int main() {
	// template

	int num1 = 48;
	float num2 = 0.05;
	double num3 = 22.13;

	cout << num1 << endl << addFive(num1) << endl;
	cout << num2 << endl << addFive(num2) << endl;
	cout << num3 << endl << addFive(num3) << endl;

	/* for (int i = 0; i <= 15; i++)
		cout << fib(i) << " ";
	cout << endl; */

	cout << gcd(408, 714) << endl;
	cout << tri(4) << endl;


	system("pause");
	return 0;
}
