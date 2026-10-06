#ifndef ADMIN_H
#define ADMIN_H

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Admin
{
private:

    string adminID;
    string password;

public:

    Admin();

    bool login();

    void adminMenu();

    void viewStudents();

    void searchStudent();

    void viewFeedback();

    void deleteStudent();

    void registrationStatistics();
};

#endif