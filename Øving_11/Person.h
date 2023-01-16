#include<vector>
#include<string>
#include <iostream>
#include <list>

class Person{
    private:
        std::string firstName;
        std::string lastName;
    public:
    Person(std::string firstName, std::string lastName);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getFullName() const;

    friend std::ostream& operator<<(std::ostream& os, const Person& p);
    bool operator <(const Person& p) const;

    void insertOrdered(std::list<Person> &l, const Person& p);
};