#include "Department.h"

Department::Department()
{
    departmentName = "";
    hodName = "";
    hodNumber = "";
    mentorName = "";
    section = "";
    lectureTheatre = "";
    description = "";
}


void Department::orientationSchedule()
{
    int day;

    cout << "\n=============================================\n";
    cout << "      ARYA COLLEGE OF ENGINEERING\n";
    cout << "   8-Day Student Orientation Program 2026\n";
    cout << "=============================================\n\n";

    cout << "Available Orientation Days\n";
    cout << "---------------------------------------------\n";
    cout << "1. Day 1 - 10 August 2026 (Monday)\n";
    cout << "2. Day 2 - 11 August 2026 (Tuesday)\n";
    cout << "3. Day 3 - 12 August 2026 (Wednesday)\n";
    cout << "4. Day 4 - 13 August 2026 (Thursday)\n";
    cout << "5. Day 5 - 14 August 2026 (Friday)\n";
    cout << "6. Day 6 - 15 August 2026 (Saturday)\n";
    cout << "7. Day 7 - 17 August 2026 (Monday)\n";
    cout << "8. Day 8 - 18 August 2026 (Tuesday)\n";

    cout << "\nEnter Day Number (1-8): ";
    cin >> day;

    switch(day)
    {
    case 1:
        cout << "\n========== DAY 1 ==========\n";
        cout << "Date : 10 August 2026 (Monday)\n";
        cout << "Time : 9:00 AM - 1:00 PM\n\n";

        cout << "- Welcome Address by Dr. Pooja Agarwal,\n";
        cout << "  Vice President, Arya College of Engineering.\n";
        cout << "- Inspirational & Motivational Speech.\n";
        cout << "- Interactive Activities for New Students.\n\n";

        cout << "2:00 PM - 3:40 PM\n";
        cout << "- Academic Classes.\n";
        break;

    case 2:
        cout << "\n========== DAY 2 ==========\n";
        cout << "Date : 11 August 2026 (Tuesday)\n";
        cout << "Time : 9:00 AM - 1:00 PM\n\n";

        cout << "- Address by Dr. Arvind Agarwal,\n";
        cout << "  President, Arya College of Engineering.\n";
        cout << "- Motivational Session.\n";
        cout << "- Student Engagement Activities & Games.\n\n";

        cout << "2:00 PM - 3:40 PM\n";
        cout << "- Academic Classes.\n";
        break;

    case 3:
        cout << "\n========== DAY 3 ==========\n";
        cout << "Date : 12 August 2026 (Wednesday)\n";
        cout << "Time : 9:00 AM - 1:00 PM\n\n";

        cout << "- Interactive Session with Grass Solution Team.\n";
        cout << "- Fun Games.\n";
        cout << "- Team Building Activities.\n";
        cout << "- Student Interaction.\n\n";

        cout << "2:00 PM - 3:40 PM\n";
        cout << "- Academic Classes.\n";
        break;

    case 4:
        cout << "\n========== DAY 4 ==========\n";
        cout << "Date : 13 August 2026 (Thursday)\n";
        cout << "Time : 9:00 AM - 1:00 PM\n\n";

        cout << "- Special Interaction with:\n";
        cout << "  * Gaurav Gaur\n";
        cout << "  * Bhawana Nawaria\n";
        cout << "  * Radhika Sain\n";
        cout << "  * Isha Kohli\n";
        cout << "- Motivational Discussion.\n";
        cout << "- Student Activities.\n\n";

        cout << "2:00 PM - 3:40 PM\n";
        cout << "- Academic Classes.\n";
        break;

    case 5:
        cout << "\n========== DAY 5 ==========\n";
        cout << "Date : 14 August 2026 (Friday)\n";
        cout << "Time : 9:00 AM - 1:00 PM\n\n";

        cout << "- Session by Mrs. Shweta Mehta Modi.\n";
        cout << "- Mrs. India - The Crown Winner.\n";
        cout << "- Director, Smart Circle Group.\n";
        cout << "- Personality Grooming Session.\n";
        cout << "- Confidence Building Activities.\n\n";

        cout << "2:00 PM - 3:40 PM\n";
        cout << "- Academic Classes.\n";
        break;

    case 6:
        cout << "\n========== DAY 6 ==========\n";
        cout << "Date : 15 August 2026 (Saturday)\n";
        cout << "Time : 9:00 AM - 1:00 PM\n\n";

        cout << "- Motivational Session by Rishika Chandnani.\n";
        cout << "- Anchor & Host of Rishika Podcast.\n";
        cout << "- Step Out of Comfort Zone.\n";
        cout << "- Explore New Opportunities.\n\n";

        cout << "2:00 PM - 3:40 PM\n";
        cout << "- Academic Classes.\n";
        break;

    case 7:
        cout << "\n========== DAY 7 ==========\n";
        cout << "Date : 17 August 2026 (Monday)\n";
        cout << "Time : 9:00 AM - 3:40 PM\n\n";

        cout << "- Jaipur Heritage Tour (Pink City).\n";
        cout << "- Learning Beyond Classroom.\n";
        cout << "- Fun Activities.\n";
        cout << "- Team Bonding.\n";
        cout << "- Memorable Experience.\n";
        break;

    case 8:
        cout << "\n========== DAY 8 ==========\n";
        cout << "Date : 18 August 2026 (Tuesday)\n";
        cout << "Time : 9:00 AM - 1:00 PM\n\n";

        cout << "- Interactive Session with RJ Geetanjali Chauhan.\n";
        cout << "- Inspiring Talk by RJ Abhi.\n";
        cout << "- Radio & Digital Storytelling Session.\n";
        cout << "- Spectacular Magic Show.\n\n";

        cout << "2:00 PM - 3:40 PM\n";
        cout << "- Academic Classes.\n\n";

        cout << "******** Upcoming Event ********\n";
        cout << "Freshers' Party\n";
        cout << "- Music\n";
        cout << "- Dance\n";
        cout << "- Games\n";
        cout << "- Fun Activities\n";
        cout << "- Unforgettable Memories\n";
        break;

    default:
        cout << "\nInvalid Choice! Please enter a number between 1 and 8.\n";
    }
}

void Department::setDepartment(string branch)
{   
    if(branch == "1" || branch == "CSE")
    {
        departmentName = "Computer Science Engineering";
        hodName = "Dr. Indu Gupta";
        hodNumber = "+91-9876543210";
        mentorName = "Ms. Renu Sharma";
        section = "A";
        lectureTheatre = "LT-9";
        description = "Basic Engineering Subjects, Engeering Mathematics , Engineering Physics, Engineering Chemistry";
    }

    else if(branch == "2" || branch == "AI & DS")
    {
        departmentName = "Artificial Intelligence & Data Science";
        hodName = "Mr. Ankit Agarwal";
        hodNumber = "9876543211";
        mentorName = "Ms. Anjali Ahuja";
        section = "G";
        lectureTheatre = "LT-15";
        description = "Basic Engineering Subjects, Engeering Mathematics , Engineering Physics, Engineering Chemistry";
    }

    else if(branch == "3" || branch == "ECE")
    {
        departmentName = "Electronics & Communication Engineering";
        hodName = "Mr. Ankit Agarwal";
        hodNumber = "+91-9876543212";
        mentorName = "Mr. Kapil Karadiya";
        section = "L";
        lectureTheatre = "LT-8";
        description = "Basic Engineering Subjects, Engeering Mathematics , Engineering Physics, Engineering Chemistry";
    }

    else if(branch == "4" || branch == "Electrical")
    {
        departmentName = "Electrical Engineering";
        hodName = "Mr. Ankit Agarwal";
        hodNumber = "+91-9876543213";
        mentorName = "Mr. Lokesh Parik";
        section = "M";
        lectureTheatre = "LT-15";
        description = "Basic Engineering Subjects, Engeering Mathematics , Engineering Physics, Engineering Chemistry";
    }

    else if(branch == "5" || branch == "Mechanical")
    {
        departmentName = "Mechanical Engineering";
        hodName = "Mr. KARAN KOSHHIK";
        hodNumber = "+91-9876543214";
        mentorName = "Mr. Karan Koshhik";
        section = "N";
        lectureTheatre = "LT-16";
       description = "Basic Engineering Subjects, Engeering Mathematics , Engineering Physics, Engineering Chemistry";
    }

    else if(branch == "6" || branch == "Civil")
    {
        departmentName = "Civil Engineering";
        hodName ="Mr. AMIT KUMAR";
        hodNumber = "+91-9876543215";
        mentorName = "Mr. Anil sharma";
        section = "P";
        lectureTheatre = "LT-4";
       description = "Basic Engineering Subjects, Engeering Mathematics , Engineering Physics, Engineering Chemistry";
    }

    else
    {
        departmentName = "Invalid Branch";
        hodName = "N/A";
        hodNumber = "N/A";
        mentorName = "N/A";
        section = "-";
        lectureTheatre = "-";
        description = "Department Not Found.";
    }

}

void Department::displayDepartmentInfo()
{
    cout << "\n=============================================\n";
    cout << "        DEPARTMENT INFORMATION\n";
    cout << "=============================================\n\n";

    cout << "Department Name : " << departmentName << endl;
    cout << "HOD             : " << hodName << endl;
    cout << "HOD Contact     : " << hodNumber << endl;
    cout << "Faculty Mentor  : " << mentorName << endl;
    cout << "Description     : " << description << endl;
}

void Department::displaySectionDetails()
{
    cout << "\n=============================================\n";
    cout << "         SECTION DETAILS\n";
    cout << "=============================================\n\n";

    cout << "Section         : " << section << endl;
    cout << "Lecture Theatre : " << lectureTheatre << endl;
    cout << "Faculty Mentor  : " << mentorName << endl;
}





