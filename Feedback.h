#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Feedback
{
private:
    string name;
    string branch;
    int day;
    int rating;
    string event;
    string suggestion;

public:
    void takeFeedback();
    void saveFeedback();
};

#endif