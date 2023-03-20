#pragma once
#include "Parallelogram.h"

class Rectangle : public Parallelogram {
public:
    FIGURE_API Rectangle(const int& a, const int& b);
protected:
    Rectangle(const int& a, const int& b, const std::string& n);
};