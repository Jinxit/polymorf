#pragma once

template<class Op, class T, class Logger>
class folder
{
public:
    folder(Op op, T init, Logger logger)
        : op(op), current(init), logger(logger) { }

    folder& fold(T val) { current = op(current, val); logger.write(val); return *this; }

    Op op;
    T current;
    Logger logger;
};