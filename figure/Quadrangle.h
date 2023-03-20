#pragma once
#include "Triangle.h"
class Quadrangle : public Triangle {
public:
    FIGURE_API Quadrangle(const int& a, const int& b, const int& c, const int& d, const int& A, const int& B, const int& C, const int& D);
    FIGURE_API int get_side_d();
    FIGURE_API int get_angle_d();
    FIGURE_API void print_sides_() override;
    FIGURE_API void print_angles_() override;
protected:
    Quadrangle(const int& a, const int& b, const int& c, const int& d,
        const int& A, const int& B, const int& C, const int& D, const int& s_c, const std::string& n);
private:
    int side_d_;
    int angle_d_;
};
