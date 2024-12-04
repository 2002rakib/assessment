#include<iostream>
using namespace std;

const int max_lectures = 4;  // maximum number of lectures

class Lecture {
public:
    string lecturerNames[max_lectures];
    string subjectNames[max_lectures];
    string courseNames[max_lectures];
    int numLectures;  // to keep track of the number of lectures added

public:
    // Constructor to initialize numLectures
    Lecture() : numLectures(0) {} //numLectures initialized to 0

    // Method to add lecture details
    addLecDetails(string lecturer, string subject, string course) {
        if (numLectures < max_lectures) {
            lecturerNames[numLectures] = lecturer;
            subjectNames[numLectures] = subject;
            courseNames[numLectures] = course;
            numLectures++;
        } else {
            cout << "Maximum Number of Lectures Reached!" << endl;
        }
    }

    // Method to display lecture details
	displayLectures() {
        if (numLectures == 0) {
            cout << "No Lecture details available." << endl;
        } else {
            cout << "Lecture Details: \n";
            for (int i = 0; i < numLectures; ++i) {
                cout << "Lecture " << i + 1 << ": \n";
                cout << "Lecturer Name: " << lecturerNames[i] << endl;
                cout << "Subject Name: " << subjectNames[i] << endl;
                cout << "Course Name: " << courseNames[i] << endl;
                cout << endl;
            }
        }
    }
};

main() {
    Lecture obj;

    // Loop to input details for each lecture
    for (int i = 0; i < max_lectures; i++) {
        string lecturer, subject, course;

        cout << "Enter details for Lecture " << i + 1 << ": \n";
        cout << "Enter Lecturer Name: ";
        cin >> lecturer;
        cout << "Enter Subject Name: ";
        cin >> subject;
        cout << "Enter Course Name: ";
        cin >> course;

        // Add the details to the object
        obj.addLecDetails(lecturer, subject, course);
    }

    // Display all the lecture details
    obj.displayLectures();

}

