#pragma once

#include <iostream>

class termlogger
{
public:
    termlogger(unsigned int indent)
        : indent(indent) { }

    template<class T>
    void write(T val) { std::cout << "log: " << val << std::endl; }

    unsigned int indent;
};