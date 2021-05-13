//BitString_PRIVATE.h
#pragma once
#include "BitStringBase.h"

using namespace std;

class BitString_PRIVATE : private BitStringBase
{
public:
	
	friend ostream& operator << (ostream& out, const BitString_PRIVATE& a);
	friend istream& operator >> (istream& in, BitString_PRIVATE& a);

	friend BitString_PRIVATE operator ^ (const BitString_PRIVATE& a, const BitString_PRIVATE& b);
	friend BitString_PRIVATE operator << (const BitString_PRIVATE& a, int n);
	friend BitString_PRIVATE operator >> (const BitString_PRIVATE& a, int n);

	BitString_PRIVATE& operator ++();
	BitString_PRIVATE& operator --();
	BitString_PRIVATE operator ++(int);
	BitString_PRIVATE operator --(int);

};

