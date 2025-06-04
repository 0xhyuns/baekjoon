#include "quadratic.h"

Quadratic::Quadratic(int a, int b, int c) {
    a_ = a;
    b_ = b;
    c_ = c;
}

int Quadratic::discriminant()
{
    return b_ * b_ - 4 * a_ * c_;
}

std::string Quadratic::hasRoot()
{
    int d = discriminant();
    if(d > 0)
        return "has two distinct real roots.";
    else if(d == 0)
        return "has a repeat root.";
    else
        return "has two distinct complex roots.";
}