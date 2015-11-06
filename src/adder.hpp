#pragma once

template<class T>
class adder
{
public:
    adder() { }

    T operator()(T lhs, T rhs) { return lhs + rhs; }
};