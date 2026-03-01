/*
Name: Shishir baral
course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop patterns
Program: While loop class Average
Description:  This program uses a do-while loop to count from 1 to 15.
*/

#include <iostream>
using namespace std;

int main () {
    
    int i = 1;
    
    do {
        cout << i << endl;
        i++;
        
    }
    while (i <=15);
    
    return 0;
    
}

/*
Reflection:
1. I understood that the do while loop runs at least one time before checking the condition.
2. The counter starts at 1 and then increases up to the number inputed.
3. I had to make sure to use the condition correctly to exactly stop it at 15 or whatever I want.
4. I had to look at the slides and take help from chatgpt after understanding.
5. I learned the difference between a while loop and a do-while loop.
*/