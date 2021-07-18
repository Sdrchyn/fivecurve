#include "myswap.hpp"

void abswap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}