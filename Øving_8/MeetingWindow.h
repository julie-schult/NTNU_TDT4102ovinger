#pragma once
#include "std_lib_facilities.h"
#include "Graph.h"
#include "Window.h"
using namespace Graph_lib;
#include "GUI.h"
#include "car.h"

class MeetingWindow : public Window {
private:
    Button quitBtn;
    In_box personName;
    In_box personEmail;
    Button personNewBtn;
public:
    MeetingWindow(Point xy, int w, int h, const string& title);
    static constexpr int w = 500;
    static constexpr int h = 500;
    static void cb_quit(Address, Address pw);
    Vector_ref<Person> people;
    void addPerson();
    static void cb_personNewBtn(Address, Address pw);
    void printVector();
};
