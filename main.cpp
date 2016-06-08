/* 
 * File:   main.cpp
 * Author: Dawn Susee
 *
 * Created on March 23, 2016, 4:04 PM
 */

#include <iostream>

using namespace std;

struct studentData
{
    // Structure that contains values entered by the user
    string name;
    int lab[7];
    int exam[7];
    int attendance;
    int capstone;
};

int main() {
    // Create a new studentDataa structure
    studentData student;
    
    // Variables that are calculated
    double labAverage, examAverage, finalGrade;
    
    // Prompt user for input and store values in variables 
    cout << "What is your name? ";
    getline (cin, student.name);
    
    cout << endl;
    
    cout << "Enter the score for Lab 1. ";
    cin >> student.lab[0];
    cout << "Enter the score for Lab 2. ";
    cin >> student.lab[1];
    cout << "Enter the score for Lab 3. ";
    cin >> student.lab[2];
    cout << "Enter the score for Lab 4. ";
    cin >> student.lab[3];
    cout << "Enter the score for Lab 5. ";
    cin >> student.lab[4];
    cout << "Enter the score for Lab 6. ";
    cin >> student.lab[5];
    cout << "Enter the score for Lab 7. ";
    cin >> student.lab[6];
    
    cout << endl;
    
    cout << "Enter the score for Exam 1. ";
    cin >> student.exam[0];
    cout << "Enter the score for Exam 2. ";
    cin >> student.exam[1];
    cout << "Enter the score for Exam 3. ";
    cin >> student.exam[2];
    cout << "Enter the score for Exam 4. ";
    cin >> student.exam[3];
    cout << "Enter the score for Exam 5. ";
    cin >> student.exam[4];
    cout << "Enter the score for Exam 6. ";
    cin >> student.exam[5];
    cout << "Enter the score for Exam 7. ";
    cin >> student.exam[6];

    cout << endl;    

    cout << "Enter the score for attendance / participation. ";
    cin >> student.attendance;
    
    cout << endl;
    
    cout << "Enter the score for the Capstone Project. ";
    cin >> student.capstone;
    
    cout << endl;
    
    // Perform calculations
    labAverage = (student.lab[0] + student.lab[1] + student.lab[2] 
            + student.lab[3] + student.lab[4] + student.lab[5] 
            + student.lab[6]) / 7;
    examAverage = (student.exam[0] + student.exam[1] + student.exam[2] 
            + student.exam[3] + student.exam[4] + student.exam[5] 
            + student.exam[6]) / 7;
    finalGrade = (labAverage * .4) + (examAverage* .35) 
            + (student.attendance * .05) + (student.capstone * .2);
    
    // Output to the user
    cout << endl;
    cout << "Grades for " << student.name << ":" << endl;
    cout << "Lab 1 score: " << student.lab[0] << endl;
    cout << "Lab 2 score: " << student.lab[1] << endl;
    cout << "Lab 3 score: " << student.lab[2] << endl;
    cout << "Lab 4 score: " << student.lab[3] << endl;
    cout << "Lab 5 score: " << student.lab[4] << endl;
    cout << "Lab 6 score: " << student.lab[5] << endl;
    cout << "Lab 7 score: " << student.lab[6] << endl;
    
    cout << endl;

    cout << "Exam 1 score: " << student.exam[0] << endl;
    cout << "Exam 2 score: " << student.exam[1] << endl;
    cout << "Exam 3 score: " << student.exam[2] << endl;
    cout << "Exam 4 score: " << student.exam[3] << endl;
    cout << "Exam 5 score: " << student.exam[4] << endl;
    cout << "Exam 6 score: " << student.exam[5] << endl;
    cout << "Exam 7 score: " << student.exam[6] << endl << endl;
    
    cout << "Lab Average: " << labAverage << endl;
    cout << "Exam Average: " << examAverage << endl; 
    cout << "Participation / Attendance: " << student.attendance << endl;
    cout << "Capstone Project: " << student.capstone << endl << endl;     
    
    cout << "Final Numeric Grade: " << finalGrade << endl;
    
    // End the program
    return 0;
}
