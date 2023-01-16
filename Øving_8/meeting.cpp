#include "meeting.h"
#include "car.h"

//oppgave 3----------------------------------------------------------------------
Meeting::Meeting(int day, int startTime, int endTime, Campus location, string subject, const Person* leader):
day{day}, startTime{startTime},endTime{endTime},location{location}, subject{subject}, leader{leader}{
    addParticipant(leader);
    meetings.emplace(this);
}

void Meeting::addParticipant(const Person* person){
    participants.emplace(person);
}

set<const Meeting*> Meeting::meetings;

Meeting::~Meeting(){
    meetings.erase(this);
}

vector<string> Meeting::getParticipantList() const{
    vector<string> people;
    for (const auto *i: participants){
        people.push_back(i->getName());
    }
    return people;
}

ostream& operator<<(ostream& os, const Meeting& m){
    os<<"Subject: "<<m.getSubject()<<endl;
    os<<"Location: "<<m.getLocation()<<endl;
    os<<"Start time: "<<m.getStartTime()<<endl;
    os<<"End time: "<<m.getEndTime()<<endl;
    os<<"Leader: "<<m.getLeader()<<endl;
    os<<"Participants: "<<endl;
    for (auto i: m.getParticipantList()){
        os<<i<<endl;
    }
    return os;
}

ostream& operator<<(ostream& os, const Campus& c){
    switch(c){
        case Campus::Trondheim:
            os<<"Trondheim";
            break;
        case Campus::Ålesund:
            os<<"Ålesund";
            break;
        case Campus::Gjøvik:
            os<<"Gjøvik";
            break;
    }
}

vector<const Person*> findPotentialCoDriving(){
    
}