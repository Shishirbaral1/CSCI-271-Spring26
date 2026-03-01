/*
Name: Shishir baral
course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop patterns
Program: While loop class Average
Description:  This program prints number from 1 to 10 but skips 5.
*/

#include <iostream>
using namespace std;

int main () {
    
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        
        cout << i << endl;
    }
    return 0;
    
}

/*
Reflection:
1. I understood that continue skips one number and moves to another.
2. When the i becomes 5, it doesnt print it.
3. But the loop still continues after skipping 5.
4.I learned the how continue changes the flow of loop.
5. I had to check the output and make sure.
*/