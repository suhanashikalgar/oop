#include <iostream>
#include <map>
#include <vector>
#include <numeric> // For accumulate
#include <string>  // For string
using namespace std;

void addStudent(map<string, vector<int> >& studentRecords) {
    string name;
    vector<int> marks(3);

    cout << "Enter student's name: ";
    cin >> name;

    cout << "Enter marks for 3 subjects: ";
    for (int i = 0; i < 3; i++) {
        cin >> marks[i];
    }

    studentRecords[name] = marks;
    cout << "Record added successfully.\n";
}

void displayStudents(const map<string, vector<int> >& studentRecords) {
    if (studentRecords.empty()) {
        cout << "No student records available.\n";
        return;
    }

    cout << "Student Records:\n";
    for (map<string, vector<int> >::const_iterator it = studentRecords.begin(); it != studentRecords.end(); ++it) {
        cout << "Student: " << it->first << ", Marks: ";
        for (size_t i = 0; i < it->second.size(); ++i) {
            cout << it->second[i] << " ";
        }
        cout << endl;
    }
}

void displayAverages(const map<string, vector<int> >& studentRecords) {
    if (studentRecords.empty()) {
        cout << "No student records available.\n";
        return;
    }

    cout << "Average Marks for Each Student:\n";
    for (map<string, vector<int> >::const_iterator it = studentRecords.begin(); it != studentRecords.end(); ++it) {
        float avg = (float)accumulate(it->second.begin(), it->second.end(), 0) / it->second.size();
        cout << "Student: " << it->first << ", Average: " << avg << endl;
    }
}

void displayTopper(const map<string, vector<int> >& studentRecords) {
    if (studentRecords.empty()) {
        cout << "No student records available.\n";
        return;
    }

    string topper;
    float highestAverage = 0;

    for (map<string, vector<int> >::const_iterator it = studentRecords.begin(); it != studentRecords.end(); ++it) {
        float avg = (float)accumulate(it->second.begin(), it->second.end(), 0) / it->second.size();
        if (avg > highestAverage) {
            highestAverage = avg;
            topper = it->first;
        }
    }

    cout << "Topper: " << topper << " with average " << highestAverage << endl;
}

int main() {
    map<string, vector<int> > studentRecords;
    int choice;

    do {
        cout << "\nStudent Marks Management System\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Student Records\n";
        cout << "3. Display Average Marks for Each Student\n";
        cout << "4. Display Topper\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(studentRecords);
                break;
            case 2:
                displayStudents(studentRecords);
                break;
            case 3:
                displayAverages(studentRecords);
                break;
            case 4:
                displayTopper(studentRecords);
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
