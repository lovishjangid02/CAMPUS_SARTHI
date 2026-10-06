#include "Admin.h"
#include <cstdio>

Admin::Admin()
{
    adminID="CampusSarthi@2026";
    password="ACE2026";
}
bool Admin::login()
{
    string id,pass;

    cout<<"\n=====================================\n";
    cout<<"           ADMIN LOGIN\n";
    cout<<"=====================================\n";

    cout<<"Enter Admin ID : ";
    cin>>id;

    cout<<"Enter Password : ";
    cin>>pass;

    if(id==adminID && pass==password)
    {
        cout<<"\nLogin Successful...\n";
        return true;
    }

    cout<<"\nInvalid Admin ID or Password.\n";

    return false;
}
void Admin::viewStudents()
{
    ifstream file("students.txt");

    if(!file)
    {
        cout<<"No Student Record Found.\n";
        return;
    }

    string line;

    while(getline(file,line))
    {
        cout<<line<<endl;
    }

    file.close();
}
void Admin::viewFeedback()
{
    ifstream file("Feedback.txt");

    if(!file)
    {
        cout<<"No Feedback Available.\n";
        return;
    }

    string line;

    while(getline(file,line))
    {
        cout<<line<<endl;
    }

    file.close();
}
void Admin::adminMenu()
{
    int choice;

    do
    {
        cout<<"\n=====================================\n";
        cout<<"         ADMIN DASHBOARD\n";
        cout<<"=====================================\n";

        cout<<"1. View Students\n";
        cout<<"2. Search Student\n";
        cout<<"3. View Feedback\n";
        cout<<"4. Delete Student\n";
        cout<<"5. Registration Statistics\n";
        cout<<"6. Logout\n";

        cout<<"\nEnter Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                viewStudents();
                break;

            case 2:
                searchStudent();
                break;

            case 3:
                viewFeedback();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                registrationStatistics();
                break;

            case 6:
                cout<<"\nLogging Out...\n";
                break;

            default:
                cout<<"\nInvalid Choice.\n";
        }

    }while(choice!=6);
}
void Admin::searchStudent()
{
    ifstream file("students.txt");

    if(!file)
    {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    string rollNo;
    cout << "\nEnter Roll Number to Search : ";
    cin >> rollNo;

    string line;
    bool found = false;

    while(getline(file, line))
    {
        if(line.find("Roll No : " + rollNo) != string::npos)
        {
            found = true;

            cout << "\n========== STUDENT FOUND ==========\n";

            cout << line << endl;

            
            for(int i = 0; i < 8; i++)
            {
                if(getline(file, line))
                    cout << line << endl;
            }

            break;
        }
    }

    file.close();

    if(!found)
    {
        cout << "\nStudent Not Found!\n";
    }
}

void Admin::deleteStudent()
{
    ifstream file("students.txt");

    if(!file)
    {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    ofstream temp("temp.txt");

    if(!temp)
    {
        cout << "\nError creating temporary file!\n";
        file.close();
        return;
    }

    string rollNo;
    cout << "\nEnter Roll Number to Delete : ";
    cin >> rollNo;

    string line;
    string studentRecord = "";
    bool found = false;

    while(getline(file, line))
    {
        // Start of a student record
        if(line.find("Name : ") == 0)
        {
            studentRecord = line + "\n";

            // Read complete student record
            while(getline(file, line))
            {
                studentRecord += line + "\n";

                // End of one student record
                if(line.find("--------------------------------------") == 0)
                {
                    break;
                }
            }

            // Check Roll Number inside complete record
            if(studentRecord.find("Roll No : " + rollNo) != string::npos)
            {
                found = true;

                // Do NOT write this record to temp file
                continue;
            }

            // Keep other student's complete record
            temp << studentRecord;
        }
        else
        {
            temp << line << endl;
        }
    }

    file.close();
    temp.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if(found)
    {
        cout<<"\nStudent with Roll Number " << rollNo << " has been deleted successfully.\n";
    }
    else
    {
        cout << "\nStudent Not Found!\n";
    }
}

void Admin::registrationStatistics()
{
    ifstream file("students.txt");

    if(!file)
    {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    string line;

    int total = 0;
    int cse = 0;
    int aids = 0;
    int civil = 0;
    int mechanical = 0;
    int electrical = 0;
    int ece = 0;

    while(getline(file, line))
    {
        if(line.find("Branch : ") != string::npos)
        {
            total++;

            if(line.find("CSE") != string::npos)
                cse++;

            else if(line.find("AI & DS") != string::npos)
                aids++;

            else if(line.find("Civil") != string::npos)
                civil++;

            else if(line.find("Mechanical") != string::npos)
                mechanical++;

            else if(line.find("Electrical") != string::npos)
                electrical++;

            else if(line.find("ECE") != string::npos)
                ece++;
        }
    }

    file.close();

    cout << "\n=====================================================\n";
    cout << "            REGISTRATION STATISTICS\n";
    cout << "=====================================================\n\n";

    cout << "Total Registered Students : " << total << endl;

    cout << "\nBranch Wise Registration\n";
    cout << "-----------------------------------------------------\n";

    cout << "Computer Science Engineering (CSE)      : " << cse << endl;
    cout << "Artificial Intelligence & DS (AI&DS)    : " << aids << endl;
    cout << "Electronics & Communication (ECE)       : " << ece << endl;
    cout << "Electrical Engineering                  : " << electrical << endl;
    cout << "Mechanical Engineering                  : " << mechanical << endl;
    cout << "Civil Engineering                       : " << civil << endl;

    cout << "=====================================================\n";
}
