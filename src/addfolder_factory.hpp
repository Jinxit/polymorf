#pragma once

#include "adder.hpp"
#include "folder.hpp"
#include "termlogger.hpp"

auto addfolder_factory()
{
    return folder<adder<int>, int, termlogger>(adder<int>(), 0, termlogger(0));
}