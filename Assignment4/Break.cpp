/*
Name: Shishir baral
course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop patterns
Program: While loop class Average
Description:  This program stops when the user press 0.
*/

#include <iostream>
using namespace std;

int main () {
    
    int number;
    
    while (true) {
        cout << "Enter a number (0 to stop): ";
        cin >> number;
        
        if (number == 0) {
            break;
        }
        
        cout << "You entered: " << number << endl;
    }
    
    cout << "Loop ended. " << endl;
    
    return 0;
    
}

/*
Reflection:
1. I understood that the do while loop runs at least one time before checking the condition.
2. The counter starts at 1 and then increases up to the number inputed.
3. I had to make sure to use the condition correctly to exactly stop it at 15 or whatever I want.
4. I had to look at lesson 4 and also look for some ideas in google.
5. I learned the difference between a while loop and a do-while loop.
*/