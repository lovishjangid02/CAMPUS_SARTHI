#include "Feedback.h"

void Feedback::takeFeedback()
{
    cout << "\n====================================================\n";
    cout << "        ARYA COLLEGE OF ENGINEERING\n";
    cout << "          ORIENTATION FEEDBACK\n";
    cout << "====================================================\n";

    cin.ignore();

    cout << "Enter Student Name : ";
    getline(cin, name);

    cout << "Enter Branch : ";
    getline(cin, branch);

    cout << "\nSelect Orientation Day\n";
    cout << "-----------------------------------------\n";
    cout << "1. Day 1 - Welcome Ceremony\n";
    cout << "2. Day 2 - President Address\n";
    cout << "3. Day 3 - Grass Solution Session\n";
    cout << "4. Day 4 - Industry Experts Interaction\n";
    cout << "5. Day 5 - Personality Grooming Session\n";
    cout << "6. Day 6 - Motivational Session\n";
    cout << "7. Day 7 - Jaipur Heritage Tour\n";
    cout << "8. Day 8 - RJ Session & Freshers Preview\n";

    cout << "\nEnter Day (1-8): ";
    cin >> day;

    while(day < 1 || day > 8)
    {
        cout << "Invalid Day! Enter Again (1-8): ";
        cin >> day;
    }

    switch(day)
    {
        case 1:
            event = "Welcome Address by Dr. Pooja Agarwal";
            break;

        case 2:
            event = "Address by Dr. Arvind Agarwal";
            break;

        case 3:
            event = "Interactive Session with Grass Solution Team";
            break;

        case 4:
            event = "Industry Experts Interaction";
            break;

        case 5:
            event = "Personality Grooming by Mrs. Shweta Mehta Modi";
            break;

        case 6:
            event = "Motivational Session by Rishika Chandnani";
            break;

        case 7:
            event = "Jaipur Heritage Tour";
            break;

        case 8:
            event = "RJ Session & Freshers Preview";
            break;
    }

    cout << "\nSelected Event : " << event << endl;

    cout << "\nRate Today's Session (1-5): ";
    cin >> rating;

    while(rating < 1 || rating > 5)
    {
        cout << "Invalid Rating! Enter Again (1-5): ";
        cin >> rating;
    }

    cin.ignore();

    cout << "\nWrite Your Feedback : ";
    getline(cin, suggestion);

    saveFeedback();

    cout << "\n============================================\n";
    cout << "Thank You!\n";
    cout << "Your feedback has been submitted successfully.\n";
    cout << "============================================\n";
}

void Feedback::saveFeedback()
{
    ofstream file("Feedback.txt", ios::app);

    if(!file)
    {
        cout << "Error opening Feedback.txt\n";
        return;
    }

    file << "=========================================================\n";
    file << "            ARYA COLLEGE ORIENTATION 2026\n";
    file << "=========================================================\n";

    file << "Student Name    : " << name << endl;
    file << "Branch          : " << branch << endl;
    file << "Orientation Day : Day " << day << endl;
    file << "Event           : " << event << endl;
    file << "Rating          : " << rating << "/5" << endl;
    file << "Feedback        : " << suggestion << endl;

    file << "=========================================================\n\n";

    file.close();
}
