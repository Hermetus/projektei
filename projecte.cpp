// ProjectEuler.cpp : Defines the entry point for the console application.
// ProjectEuler tehtävien ratkaisuyritelmiä
// Aloitettu 4.5.2018

#include "stdafx.h"
#include <iostream>

void problem1();
void problem2();
void problem3();

int main()
{
	problem3();

}

void problem1() {
	//Problem 1.
	//Multiples of 3 and 5
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
	//Fibonacci's evens' sum

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
	int n = 600851475143;
	int largestPrimeFactor = 1;
	if (n % 2 == 0) {
		largestPrimeFactor = 2;
		while (n % 2 == 0) {
			n = n / 2;
		}
	}
	if (n % 3 == 0) {
		largestPrimeFactor = 3;
		while (n % 3 == 0) {
			n = n / 3;
		}
	}
	int multOfSix = 6;
	while (multOfSix - 1 <= n) {
		if (n % multOfSix - 1 == 0) {
			largestPrimeFactor = multOfSix - 1;
			while (n % multOfSix - 1 == 0) {
				n = n / largestPrimeFactor;
			}
		}
	}

}
