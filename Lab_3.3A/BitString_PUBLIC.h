//BitString_PUBLIC.h
#pragma once
#include "BitStringBase.h"

class BitString_PUBLIC : public BitStringBase
{
public:

	friend BitString_PUBLIC operator ^ (const BitString_PUBLIC& a, const BitString_PUBLIC& b);
	friend BitString_PUBLIC operator << (const BitString_PUBLIC& a, int n);
	friend BitString_PUBLIC operator >> (const BitString_PUBLIC& a, int n);

	BitString_PUBLIC& operator ++();
	BitString_PUBLIC& operator --();
	BitString_PUBLIC operator ++(int);
	BitString_PUBLIC operator --(int);
};


