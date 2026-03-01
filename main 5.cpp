/*
Name: Shishir baral
course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop patterns
Program: While loop class Average
Description:  This program uses a while loop to input 10 grades and calculate the average.
*/

#include <iostream>
using namespace std;

int main () {
    double grade;
    double sum = 0;
    
    for (int i = 1; i <= 5; i++) {
        cout << "Enter grade " << i << ": ";
        cin >> grade;
        sum = sum + grade;
    }
    
    double average = sum / 5;
    
    cout << "class average: " << average << endl;
    
    return 0;
}

/*
Reflection:
1. I understood how a while loop repeats based on a condition.
2. The counter variable controls how many timed the loop runs.
3. Ilearned why casting is needed to avoid interger divison.
3. I took help of AI to verify my codes as it was my first time using loop.
*/