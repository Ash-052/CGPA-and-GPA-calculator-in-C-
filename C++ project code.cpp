#include <iostream>

using namespace std;

class GPAAndCGPACalculator {
private:
    int semesterCount;
    float totalPoints;
    float totalCredits;
    float semGPA[10];

public:
    GPAAndCGPACalculator() {
        semesterCount = 0;
        totalPoints = 0;
        totalCredits = 0;
    }

    void calculateGPA() {
        int subjectCount;
        float credit[10], point[10];

        cout << "Enter the number of subjects: ";
        cin >> subjectCount;

        for (int i = 0; i < subjectCount; i++) {
            cout << "Enter the credit for subject " << i + 1 << ": ";
            cin >> credit[i];

            cout << "Enter the point for subject " << i + 1 << ": ";
            cin >> point[i];
        }

        for (int j = 0; j < subjectCount; j++) {
            totalPoints += credit[j] * point[j];
            totalCredits += credit[j];
        }

        cout << "\n\n\nTotal Points: " << totalPoints << " . Total Credits: " << totalCredits << " .Total GPA: " << totalPoints / totalCredits << " ." << endl;
    }

    void calculateCGPA() {
        cout << "Enter the number of semesters: ";
        cin >> semesterCount;

        for (int i = 0; i < semesterCount; i++) {
            cout << "Enter the GPA for semester " << i + 1 << ": ";
            cin >> semGPA[i];
        }

        float totalGPA = 0;
        for (int j = 0; j < semesterCount; j++) {
            totalGPA += semGPA[j];
        }

        cout << "******** Your CGPA is " << totalGPA / semesterCount << " **********" << endl;
    }

    void method() {
        cout << "--------------- Method of Calculating GPA & CGPA ---------------\n\n" << endl;
        cout << "GPA= Sum of (Credit*Point) / total of credits" << endl << endl;
        cout << " CGPA= Sum of GPA / number of semesters" << endl;
        cout << "-----------------------------------------------------------------\n\n" << endl;
    }
};

int main() {
    GPAAndCGPACalculator calculator;
    int choice;

    while (true) {
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "          GPA & CGPA Calculator       " << endl;
        cout << "--------------------------------------------------------------------------\n\n" << endl;
        cout << "      MENU:" << endl;
        cout << "          1. Calculate GPA (Grade Point Average)" << endl;
        cout << "          2. Calculate CGPA (Cummulative Grade Point Average)" << endl;
        cout << "          3. Method that is applied here for calclating GPA & CGPA" << endl;
        cout << "          4. Exit Application" << endl;
        cout << "--------------------------------------------------------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculator.calculateGPA();
                break;

            case 2:
                calculator.calculateCGPA();
                break;

            case 3:
                calculator.method();
                break;

            case 4:
                exit(EXIT_SUCCESS);

            default:
                cout << "You have entered wrong input.Try again!\n" << endl;
                break;
        }
    }
}
