// Simple class to hold student information
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student::Student() {

	name = "Louie";
	gpa = 1.0;
	scores = new double[4];
	scores[0] = 0.0;
	scores[1] = 0.0;
	scores[2] = 0.0;
	scores[3] = 0.0;

}

Student::Student(string inName, double inGpa, double* inScores) {

	name = inName;
	gpa = inGpa;
	scores = inScores;

}

Student::~Student() {
	delete[]scores;
}

void Student::SetName(string inName) {
	name = inName;
}

string Student::GetName() {
	return name;
}

void Student::SetGPA(double inGpa) {
	gpa = inGpa;
}

double Student::GetGPA() {
	return gpa;
}

void Student::SetScoreAt(int index, double score) {
	scores[index] = score;
}

double Student::GetScoresAt(int index) {
	return scores[index];
}

void Student::UpdateGPA() {

	int avg = 0;
	for (int i = 0; i < 4; ++i) {
		avg += scores[i];
	}
	avg /= 4;
	if (avg >= 90)
		gpa = 4.0;
	else if (avg >= 80 && avg < 90)
		gpa = 3.0;
	else if (avg >= 70 && avg < 80)
		gpa = 2.0;
	else if (avg >= 60 && avg < 70)
		gpa = 1.0;
	else if (avg < 60)
		gpa = 0.0;


}

void Student::PrintInfo() {
	cout << name << " (" << gpa << ")" << endl;
	cout << "Scores: [" << scores[0] << ", " << scores[1] << ", ";
	cout << scores[2] << ", " << scores[3] << "]" << endl;
}