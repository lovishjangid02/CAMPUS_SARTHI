#include "Student.h"

static int cseCount = 0;
static int aiCount = 0;
static int id = 1001; // Static variable ki value program chalne tak preserve rehti hai.

void Student::registerStudent()
{
    cout << "\n===== Student Registration =====\n";

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Roll No: ";
    cin >> rollNo;
    cin.ignore();

    
    cout << "\nAvailable Branches:\n";
    cout << "1. CSE\n";
    cout << "2. AI & DS\n";
    cout << "3. Civil\n";
    cout << "4. Mechanical\n";
    cout << "5. Electrical\n";
    cout << "6. ECE\n\n";
    cout << "Enter Your Branch: ";

   
   getline(cin, branch);
    

   
   

    cout << "Enter Email: ";
    cin >> email;

    cout << "Enter Mobile Number: ";
    cin >> mobile;

    studentID = "ACE" + to_string(id);
    id++;

    
   
    
    cout << "\nStudent Registered Successfully!" << endl;
    cout << "Your Student ID is: " << studentID << endl;
    cout << "Section : " << section << endl;
    cout << "Lecture Theatre : " << lectureTheatre << endl;
    cout << "Status : Registered" << endl;
}

bool Student::isStudentExists()
{
    ifstream file("students.txt");

    if(!file)
    {
        return false;   
    }

    string line;

    while(getline(file, line))
    {
        if(line == "Roll No : " + rollNo)
        {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}



void Student::displayStudent()
{
    ifstream file("students.txt");

    if(!file)
    {
        cout << "\nNo student records found!\n";
        return;
    }

    string line;

    cout << "\n========== STUDENT DETAILS ==========\n\n";

    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}
void Student::saveStudent()
{
    if(isStudentExists())
    {
        cout << "\nStudent already registered!\n";
        return;
    }

    ofstream file("students.txt", ios::app);

    file << "Name : " << name << endl;
    file << "Roll No : " << rollNo << endl;
    file << "Branch : " << branch << endl;
    file << "Email : " << email << endl;
    file << "Mobile Number : " << mobile << endl;
    file << "Student ID : " << studentID << endl;
    file << "Status : Registered" << endl;
    file << "--------------------------------------" << endl;
    

    file.close();

    cout << "\nStudent Details Saved Successfully!\n";
}
