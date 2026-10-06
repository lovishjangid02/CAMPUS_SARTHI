#include <iostream>
#include "Student.h"
#include "Department.h"
#include "CampusGuide.h"
#include "Feedback.h"
#include "Admin.h"

using namespace std;

int main()
{
    Student s;
    Department d;
    CampusGuide g;
    Feedback f;
    Admin a;

    int choice;
    int portalChoice;

   

    cout << "\n";
    cout << "************************************************************\n";
    cout << "*                                                          *\n";
    cout << "*            ARYA COLLEGE OF ENGINEERING                   *\n";
    cout << "*                  ORIENTATION 2026                        *\n";
    cout << "*                                                          *\n";
    cout << "*          Welcome to the Smart Orientation System         *\n";
    cout << "*                                                          *\n";
    cout << "*            Press Enter to Continue...                    *\n";
    cout << "*                                                          *\n";
    cout << "************************************************************\n";

    cin.get();

  

    do
    {
        cout << "\n===========================================\n";
        cout << "        SMART ORIENTATION SYSTEM\n";
        cout << "===========================================\n";

        cout << "1. Student Portal\n";
        cout << "2. Admin Portal\n";
        cout << "3. Exit\n";

        cout << "\nEnter Choice : ";
        cin >> portalChoice;

        switch(portalChoice)
        {

            case 1:
            {
                do
                {
                    cout << "\n===========================================\n";
                    cout << "       ARYA COLLEGE OF ENGINEERING\n";
                    cout << "             ORIENTATION 2026\n";
                    cout << "===========================================\n";

                    cout << "1. Student Registration\n";
                    cout << "2. Orientation Schedule\n";
                    cout << "3. Department Information\n";
                    cout << "4. Campus Guide\n";
                    cout << "5. Feedback\n";
                    cout << "6. Back to Portal Menu\n";

                    cout << "\nEnter Your Choice : ";
                    cin >> choice;

                    switch(choice)
                    {
                        case 1:
                            s.registerStudent();
                            s.saveStudent();
                            break;

                        case 2:
                            d.orientationSchedule();
                            break;

                        case 3:
                        {
                            string branch;

                            cin.ignore();

                            cout << "\nAvailable Branches:\n";
                            cout << "1. CSE\n";
                            cout << "2. AI & DS\n";
                            cout << "3. Civil\n";
                            cout << "4. Mechanical\n";
                            cout << "5. Electrical\n";
                            cout << "6. ECE\n";

                            cout << "\nEnter Your Branch : ";
                            getline(cin, branch);

                            d.setDepartment(branch);

                            d.displayDepartmentInfo();
                            d.displaySectionDetails();

                            break;
                        }

                        case 4:
                            g.showCampusMenu();
                            break;

                        case 5:
                            f.takeFeedback();
                            break;

                        case 6:
                            cout << "\nReturning to Portal Menu...\n";
                            break;

                        default:
                            cout << "\nInvalid Choice!\n";
                    }

                } while(choice != 6);

                
                break;
            }

            

            case 2:
            {
                if(a.login())
                {
                    a.adminMenu();
                }

               
                break;
            }

            

            case 3:
                cout << "\n";
                cout << "================================================\n";
                cout << " Thank You For Using Smart Orientation System!\n";
                cout << "          Have a Great Day!\n";
                cout << "================================================\n";
                break;

            default:
                cout << "\nInvalid Choice! Please try again.\n";
        }

    } while(portalChoice != 3);

    return 0;
}