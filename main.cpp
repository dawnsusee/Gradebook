/* 
 * File:   main.cpp
 * Author: Dawn Susee
 *
 * Created on March 23, 2016, 4:04 PM
 */

#include <iostream>

using namespace std;

int main() {
    int lab1, lab2, lab3, lab4, lab5, lab6, lab7;
    int exam1, exam2, exam3, exam4, exam5, exam6, exam7;
    int attendance, capstone;
    double labAverage, examAverage, finalGrade;
    
    string name;
    
    cout << "What is your name? ";
    getline (cin, name);
    
    cout << endl;
    
    cout << "Enter the score for Lab 1. ";
    cin >> lab1;
    cout << "Enter the score for Lab 2. ";
    cin >> lab2;
    cout << "Enter the score for Lab 3. ";
    cin >> lab3;
    cout << "Enter the score for Lab 4. ";
    cin >> lab4;
    cout << "Enter the score for Lab 5. ";
    cin >> lab5;
    cout << "Enter the score for Lab 6. ";
    cin >> lab6;
    cout << "Enter the score for Lab 7. ";
    cin >> lab7;
    
    cout << endl;
    
    cout << "Enter the score for Exam 1. ";
    cin >> exam1;
    cout << "Enter the score for Exam 2. ";
    cin >> exam2;
    cout << "Enter the score for Exam 3. ";
    cin >> exam3;
    cout << "Enter the score for Exam 4. ";
    cin >> exam4;
    cout << "Enter the score for Exam 5. ";
    cin >> exam5;
    cout << "Enter the score for Exam 6. ";
    cin >> exam6;
    cout << "Enter the score for Exam 7. ";
    cin >> exam7;

    cout << endl;    

    cout << "Enter the score for attendance / participation. ";
    cin >> attendance;
    
    cout << endl;
    
    cout << "Enter the score for the Capstone Project. ";
    cin >> capstone;
    
    cout << endl;
    
    cout << endl;
    cout << "Grades for " << name << ":" << endl;
    cout << "Lab 1 score: " << lab1 << endl;
    cout << "Lab 2 score: " << lab2 << endl;
    cout << "Lab 3 score: " << lab3 << endl;
    cout << "Lab 4 score: " << lab4 << endl;
    cout << "Lab 5 score: " << lab5 << endl;
    cout << "Lab 6 score: " << lab6 << endl;
    cout << "Lab 7 score: " << lab7 << endl;
    
    cout << endl;

    cout << "Exam 1 score: " << exam1 << endl;
    cout << "Exam 2 score: " << exam2 << endl;
    cout << "Exam 3 score: " << exam3 << endl;
    cout << "Exam 4 score: " << exam4 << endl;
    cout << "Exam 5 score: " << exam5 << endl;
    cout << "Exam 6 score: " << exam6 << endl;
    cout << "Exam 7 score: " << exam7 << endl << endl;
    
    labAverage = (lab1 + lab2 + lab3 + lab4 + lab5 + lab6 + lab7) / 7;
    examAverage = (exam1 + exam2 + exam3 + exam4 + exam5 + exam6 + exam7) / 7;
    
    cout << "Lab Average: " << labAverage << endl;
    cout << "Exam Average: " << examAverage << endl; 
    cout << "Participation / Attendance: " << attendance << endl;
    cout << "Capstone Project: " << capstone << endl << endl;     
    
    finalGrade = (labAverage * .4) + (examAverage* .35) + (attendance * .05) + (capstone * .2);
    
    cout << "Final Numeric Grade: " << finalGrade << endl;
    
    return 0;
}
