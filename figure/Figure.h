#pragma once
#ifdef FIGURE_EXPORTS
#define FIGURE_API __declspec(dllexport)
#else
#define FIGURE_API __declspec(dllimport)
#endif
#include <string>

class Figure {
public:
    FIGURE_API int get_sides_count();
    FIGURE_API std::string get_name();
    FIGURE_API Figure();
    FIGURE_API virtual void print_sides_() = 0;
    FIGURE_API virtual void print_angles_() = 0;
protected:
    Figure(const int& s_c, const std::string& n);
private:
    int sides_count_;
    std::string name_;
};
