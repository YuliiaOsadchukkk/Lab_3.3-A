//BitStringBase.h
#pragma once

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class BitStringBase
{
	long first;
	long second;

public:
	long GetFirst() const;
	long GetSecond() const;
	void SetFirst(long value);
	void SetSecond(long value);

	BitStringBase() {};
	BitStringBase(const BitStringBase& obj);
	BitStringBase(const long& first, const long& second);
	~BitStringBase() {};

	BitStringBase& operator = (const BitStringBase&);
	operator string() const;

	friend ostream& operator << (ostream&, const BitStringBase&);
	friend istream& operator >> (istream&, BitStringBase&);
};
