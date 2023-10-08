#pragma once
#include <iostream>


struct big_int
{
    big_int(int v) : val(v) {}

    friend big_int operator + (const big_int& a, const big_int& b);

    friend std::ostream& operator << (std::ostream& out, const big_int& a);

    big_int operator - (const big_int& other);

private:
    int val;
};

inline big_int operator + (const big_int& a, const big_int& b)
{
    return big_int(a.val + b.val);
}

inline std::ostream& operator << (std::ostream& out, const big_int& a)
{
    out << a.val;
    return out;
}

inline big_int big_int::operator - (const big_int& other)
{
    this->val -= other.val;
    return *this;
}

inline big_int test_big_int(const big_int& a, const big_int& b)
{
    return a + b;
}
