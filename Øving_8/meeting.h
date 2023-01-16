#include "std_lib_facilities.h"
#include "car.h"
#pragma once

//oppgave 3----------------------------------------------------------------------
enum class Campus { Trondheim, Ålesund, Gjøvik };

class Meeting {
    private:
        int day;
        int startTime;
        int endTime;
        Campus location;
        string subject;
        const Person* leader;
        set<const Person*> participants;
        static set<const Meeting*> meetings;
    public:
        Meeting(int day, int startTime, int endTime, Campus location, string subject, const Person* leader);
        int getDay() const { return day; } 
        int getStartTime() const { return startTime; }
        int getEndTime() const { return endTime; }
        Campus getLocation() const 	{ return location;}
        string getSubject() const {return subject;}
        const Person* getLeader() const {return leader; }
        void addParticipant(const Person* person);
        vector<string> getParticipantList() const;
        ~Meeting();
        vector<const Person*> findPotentialCoDriving();
};

ostream& operator<<(ostream& os, const Meeting& m);
ostream& operator<<(ostream& os, const Campus& c);