#pragma once
#include "Figure.h"

class Triangle : public Figure {
public:
    FIGURE_API Triangle(const int& a, const int& b, const int& c, const int& A, const int& B, const int& C);
    FIGURE_API int get_side_a();
    FIGURE_API int get_side_b();
    FIGURE_API int get_side_c();
    FIGURE_API int get_angle_a();
    FIGURE_API int get_angle_b();
    FIGURE_API int get_angle_c();
    FIGURE_API void print_sides_() override;
    FIGURE_API void print_angles_() override;
protected:
    Triangle(const int& a, const int& b, const int& c, const int& A, const int& B, const int& C, const int& s_c, const std::string& n);
private:
    int side_a_;
    int side_b_;
    int side_c_;
    int angle_a_;
    int angle_b_;
    int angle_c_;
};