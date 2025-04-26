#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;

int main() {
	string sdName;
	double sdGpa;
	double sdScores[4];
	Student* stdn1, * stdn2;

	// Read input
	cin >> sdName;
	cin >> sdGpa;
	cin >> sdScores[0];
	cin >> sdScores[1];
	cin >> sdScores[2];
	cin >> sdScores[3];

	// Dynamically allocate Student objects
	stdn1 = new Student();
	stdn2 = new Student(sdName, sdGpa, sdScores);

	// Output student info before GPA updates
	cout << fixed << setprecision(2);
	cout << "Before updates: " << endl;
	cout << "Student 1" << endl;
	stdn1->PrintInfo();
	cout << endl;
	cout << "Student 2" << endl;
	stdn2->PrintInfo();
	cout << endl;

	// Modify scores of stdn1
	stdn1->SetScoreAt(0, 87);
	stdn1->SetScoreAt(1, 72);
	stdn1->SetScoreAt(2, 93);
	stdn1->SetScoreAt(3, 69);

	// Calculate new GPA based on new scores
	stdn1->UpdateGPA();
	stdn2->UpdateGPA();

	// Output new results
	cout << "After updates: " << endl;
	cout << "Student 1" << endl;
	stdn1->PrintInfo();
	cout << endl;
	cout << "Student 2" << endl;
	stdn2->PrintInfo();

	delete stdn1;
	delete stdn2;
	return 0;
}