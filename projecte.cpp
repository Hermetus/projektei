// ProjectEuler.cpp : Defines the entry point for the console application.
// ProjectE. tehtävien ratkaisuyritelmiä
// Aloitettu 4.5.2018

#include <iostream>
#include <cmath>

void problem1();
void problem2();
void problem3();

int main()
{
	problem3();

}

void problem1() {
	//Problem 1.
	//2 ja 5 kertoimet
	int sum = 0;
	for (int i = 1; i != 1000; ++i) {
		if (i % 3 == 0 or i % 5 == 0) {
			sum += i;
		}
	}
	std::cout << "The sum is: " << sum << std::endl;
}

void problem2() {
	//Problem 2.
	//Fibonaccin parillisten summa

	int LIMIT = 4000000;

	int fib1 = 1;
	int fib2 = 2;
	int sum = 0;
	std::cout << fib1 << " " << fib2 << " ";
	while (fib1 <= LIMIT and fib2 <= LIMIT) {
		if (fib1 % 2 == 0) {
			sum += fib1;
		}
		else if (fib2 % 2 == 0) {
			sum += fib2;
		}
		fib1 = fib1 + fib2;
		fib2 = fib2 + fib1;
	}
	std::cout << std::endl << "The sum is: " << sum;
}

void problem3() {
	//Problem 3.
	//Largest prime factor of a number
	long long int n = 600851475143;
	long long int largestPrimeFactor = 1;

	if (n % 2 == 0) {
		largestPrimeFactor = 2;
		while (n % 2 == 0) {
			n = n / 2;
		}
	}

	long long int possFactor = 3;
	while (possFactor < sqrt(n)) {
		if (n % possFactor == 0) {
			largestPrimeFactor = possFactor;
		}
		while (n % possFactor == 0) {
			n = n / largestPrimeFactor;
		}
		possFactor += 2;
		std::cout << largestPrimeFactor << std::endl;
	}

	if (largestPrimeFactor < n) {
		largestPrimeFactor = n;
	}

	std::cout << "Largest prime factor: " << largestPrimeFactor << std::endl;
}
