#pragma once
#include <tuple>
#include <vector>
#include <cmath>
#include <algorithm>
#include "std_lib_facilities.h"
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>

class Vehicle : Fl_Widget{
    private:

    public:
        Vehicle(Fl_Widget());
        void draw();
};