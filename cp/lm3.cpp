#include"bits/stdc++.h"
using namespace std;

class Student {
    public:
    int rollNumber;
    string name;
    string answers;

    Student(int rollNumber1, string name1, string answers1) {
        rollNumber = rollNumber1;
        name = name1;
        answers = answers1;
    }
};

class Exam {
    public:
    Student *studentList[100];
    int noOfSudents;
    int noOfQuestions;
    int correctAnswerMarks;
    int incorrectAnswerDed;
    int passingMarks;
    string key;

    int curind = 0;
    Exam(string examKey, int correctMarks, int incorrectDed, int passMarks) {
        key = examKey;
        correctAnswerMarks = correctAnswerMarks;
        incorrectAnswerDed = incorrectDed;
        passingMarks = passMarks;
    }
    
    int addStudent(Student *stu);
    int getScore(int i);
    int passCount();
};

int Exam :: addStudent(Student *stu) {
    if(curind == 100)
        return -1;
    int rightind = -1;
    for(int i = 0; i < curind; i++) {
        if(studentList[i] -> rollNumber > stu -> rollNumber) {
            rightind = i;
            break;
        }
    }
    for(int i = curind; i > rightind; i--) {
        studentList[i] = studentList[i - 1];
    }
    curind++;
    studentList[rightind] = stu;
}

int Exam :: getScore(int i) {
    int ans = 0;
    for(int j = 0; j < curind; j++) {
        if(studentList[j] -> rollNumber == i) {
            for(int k = 0; k < noOfQuestions; k++)  {
                if(studentList[j] -> answers[k] == '_')
                    continue;
                if(studentList[j] -> answers[k] == key[k])
                    ans += correctAnswerMarks;
                else
                    ans -= incorrectAnswerDed;
            }
            break;
        } 
    }

    return ans;
}

int Exam :: passCount() {
    int ans = 0;
    for(int j = 0; j < curind; j++) {
        int curmarks = 0;
        for(int k = 0; k < noOfQuestions; k++)  {
            if(studentList[j] -> answers[k] == '_')
                continue;
            if(studentList[j] -> answers[k] == key[k])
                ans += correctAnswerMarks;
            else
                ans -= incorrectAnswerDed;
        }
        if(curmarks >= passingMarks)
            ans++;
    }

    return ans;
}