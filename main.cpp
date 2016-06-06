/* 
 * File:   main.cpp
 * Author: Dawn Susee
 *
 * Created on March 23, 2016, 4:04 PM
 */

#include <iostream>

using namespace std;

int main() {
    // Values entered by the user
    int lab[7];
    int exam[7];
    int attendance, capstone;
    string name;
    
    // Variables that are calculated
    double labAverage, examAverage, finalGrade;
    
    // Prompt user for input and store values in variables 
    cout << "What is your name? ";
    getline (cin, name);
    
    cout << endl;
    
    cout << "Enter the score for Lab 1. ";
    cin >> lab[0];
    cout << "Enter the score for Lab 2. ";
    cin >> lab[1];
    cout << "Enter the score for Lab 3. ";
    cin >> lab[2];
    cout << "Enter the score for Lab 4. ";
    cin >> lab[3];
    cout << "Enter the score for Lab 5. ";
    cin >> lab[4];
    cout << "Enter the score for Lab 6. ";
    cin >> lab[5];
    cout << "Enter the score for Lab 7. ";
    cin >> lab[6];
    
    cout << endl;
    
    cout << "Enter the score for Exam 1. ";
    cin >> exam[0];
    cout << "Enter the score for Exam 2. ";
    cin >> exam[1];
    cout << "Enter the score for Exam 3. ";
    cin >> exam[2];
    cout << "Enter the score for Exam 4. ";
    cin >> exam[3];
    cout << "Enter the score for Exam 5. ";
    cin >> exam[4];
    cout << "Enter the score for Exam 6. ";
    cin >> exam[5];
    cout << "Enter the score for Exam 7. ";
    cin >> exam[6];

    cout << endl;    

    cout << "Enter the score for attendance / participation. ";
    cin >> attendance;
    
    cout << endl;
    
    cout << "Enter the score for the Capstone Project. ";
    cin >> capstone;
    
    cout << endl;
    
    // Perform calculations
    labAverage = (lab[0] + lab[1] + lab[2] + lab[3] + lab[4] + lab[5] + lab[6]) / 7;
    examAverage = (exam[0] + exam[1] + exam[2] + exam[3] + exam[4] + exam[5] + exam[6]) / 7;
    finalGrade = (labAverage * .4) + (examAverage* .35) + (attendance * .05) + (capstone * .2);
    
    // Output to the user
    cout << endl;
    cout << "Grades for " << name << ":" << endl;
    cout << "Lab 1 score: " << lab[0] << endl;
    cout << "Lab 2 score: " << lab[1] << endl;
    cout << "Lab 3 score: " << lab[2] << endl;
    cout << "Lab 4 score: " << lab[3] << endl;
    cout << "Lab 5 score: " << lab[4] << endl;
    cout << "Lab 6 score: " << lab[5] << endl;
    cout << "Lab 7 score: " << lab[6] << endl;
    
    cout << endl;

    cout << "Exam 1 score: " << exam[0] << endl;
    cout << "Exam 2 score: " << exam[1] << endl;
    cout << "Exam 3 score: " << exam[2] << endl;
    cout << "Exam 4 score: " << exam[3] << endl;
    cout << "Exam 5 score: " << exam[4] << endl;
    cout << "Exam 6 score: " << exam[5] << endl;
    cout << "Exam 7 score: " << exam[6] << endl << endl;
    
    cout << "Lab Average: " << labAverage << endl;
    cout << "Exam Average: " << examAverage << endl; 
    cout << "Participation / Attendance: " << attendance << endl;
    cout << "Capstone Project: " << capstone << endl << endl;     
    
    cout << "Final Numeric Grade: " << finalGrade << endl;
    
    // End the program
    return 0;
}
