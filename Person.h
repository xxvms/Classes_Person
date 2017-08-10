//
// Created by tombr on 10/08/2017.
//

#ifndef CLASSES_PERSON_PERSON_H
#define CLASSES_PERSON_PERSON_H


#include <string>

class Person {
private:
    std::string first_name;
    std::string last_name;
    int arbitrary_number;
public:
    Person(std::string fist, std::string last, int arbitrary);

};


#endif //CLASSES_PERSON_PERSON_H
