// CIT125_Ch7_Fig7_38_Luigi_Robles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Luigi Robles
// Ch.7 Pg.229 figure 7-38
// 7-05-2020 Summer Term

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare and initialize variables
    int day = 0;
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;

    for (day = 1; day < 8; day += 1) // for loop to track days
    {
        //input part of IPO
        cout << "How many text messages did you send on day" 
            << day << "?";
        cin >> dailyTexts; //user input for number of text per day
        totalTexts += dailyTexts; //variable for adding up total text messages
    } //end for
    
    // Calculate and display Average number of text messages
    average = static_cast<double>(totalTexts) / (day - 1); // processing part of IPO
    cout << fixed << setprecision(0);
    cout << endl << "You sent approximately "
        << average << " text messages per day." << endl; //output part of IPO
    return 0;
} //end of main function

