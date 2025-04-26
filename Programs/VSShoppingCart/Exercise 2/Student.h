#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
using namespace std;

class Student {

public:
    Student();
    Student(string inName, double inGpa, double* inScores);
    ~Student();
    void SetName(string inName);
    string GetName();
    void SetGPA(double inGpa);
    double GetGPA();
    void SetScoreAt(int index, double score);
    double GetScoresAt(int index);
    void UpdateGPA();
    void PrintInfo();

private:
    string name;
    double gpa;
    double* scores;
};

#endif /* STUDENT_H_ */