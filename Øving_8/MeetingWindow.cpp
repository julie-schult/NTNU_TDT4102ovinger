#include "meeting.h"
#include "car.h"
#include "MeetingWindow.h"

void MeetingWindow::cb_quit(Address, Address pw) {
    reference_to<MeetingWindow>(pw).hide();
}

void MeetingWindow::addPerson() {
    string name;
    string email;
    name = personName.get_string();
    email = personEmail.get_string();
    people.push_back(new Person{name, email});
    personName.clear_value();
    personEmail.clear_value();
}

void MeetingWindow:: cb_personNewBtn(Address, Address pw) {
    reference_to<MeetingWindow>(pw).addPerson();
}

MeetingWindow::MeetingWindow(Point xy, int w, int h, const string& title) : Window{xy, w, h, title},  quitBtn{Point{350,100}, 20,20,"quit",cb_quit}, personName{Point{200,200}, 70, 30, "Navn"}, personEmail{Point{200, 300}, 70, 30, "Email"}, personNewBtn{Point{200,400}, 20,20, "Add person", cb_personNewBtn} {
    attach(quitBtn);
    attach(personName);
    attach(personEmail);
    attach(personNewBtn);
};

void MeetingWindow::printVector() {
    for(auto i:people) {
        cout << *i << endl;
    }
}
