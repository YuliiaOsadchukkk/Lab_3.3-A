//main.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "BitString_PUBLIC.h"
#include "BitString_PRIVATE.h"

using namespace std;

int main()
{
	cout << "PUBLIC" << endl << endl;
	{
		BitString_PUBLIC o;
		int n;
		
		cin >> o;
		cout << o << endl << endl;

		// ShiftLeft
		cout << "How many bits do you want to shift left?" << endl;
		cout << "Input:  "; cin >> n;
		BitString_PUBLIC a = o << n;
		cout << a << endl;

		// ShiftRight
		cout << "How many bits do you want to shift right?" << endl;
		cout << "Input:  "; cin >> n;
		BitString_PUBLIC b = o >> n;
		cout << b << endl;

		// Xor
		cout << "Xor: " << endl;
		cout << (a ^ b) << endl << endl << endl;;

		cout << "++o: " << ++o << endl;
		cout << "--o: " << --o << endl;
		cout << "o++: " << o++ << endl;
		cout << "o--: " << o-- << endl << endl;

		// Size
		cout << "Size of public class: " << sizeof(o) << endl;
	}

	cout << endl << "--------------------------------------------------------------" << endl;

	cout << "PRIVATE" << endl << endl;
	{
		BitString_PRIVATE o;
		int n;
		
		cin >> o;
		cout << o << endl << endl;

		// ShiftLeft
		cout << "How many bits do you want to shift left?" << endl;
		cout << "Input:  "; cin >> n;
		BitString_PRIVATE a = o << n;
		cout << a << endl;

		// ShiftRight
		cout << "How many bits do you want to shift right?" << endl;
		cout << "Input:  "; cin >> n;
		BitString_PRIVATE b = o >> n;
		cout << b << endl;

		// Xor
		cout << "Xor: " << endl;
		cout << (a ^ b) << endl << endl << endl;;


		//oprations
		cout << "++o: " << ++o << endl;
		cout << "--o: " << --o << endl;
		cout << "o++: " << o++ << endl;
		cout << "o--: " << o-- << endl << endl;

		// SIze
		cout << "Size of private class: " << sizeof(o) << endl;
	}

	return 0;
}