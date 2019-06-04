////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Author: Joshua Stromberg
// Program Description: Program prompts user to enter three numbers, one at a time. The using if/elif statements, the program figures out which of the three numbers it should display at the end as the maximum and tell the user which it is.
// Input: Three integers
// Output: Which of the three integers is the max
// Processing: Program uses if/elif to read all three integers and then based on conditions, base the maximum at the end.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 
#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
    // main code of program
     
    std::cout << "Enter in three numbers to find the maximum.\n";
    // tell user what to do
     
    int firstNumber;
    std::cout << "Input your first number:   ";
    std::cin >> firstNumber;
    // storage for the first number, the prompt the user to enter the first number
     
    int secondNumber;
    std::cout << "Input your second number:   ";
    std::cin >> secondNumber;
    // storage for the second number, the prompt the user to enter the second number
     
    int thirdNumber;
    std::cout << "Input your third number:   ";
    std::cin >> thirdNumber;
    // storage for the third number, the prompt the user to enter the third number
     
    if ((thirdNumber >= firstNumber) && (thirdNumber >= secondNumber))
        std::cout << "The maximum of the three numbers is " << thirdNumber << ". " << std::endl;
    // run the three inputs through the first set of conditions, if the third number is the biggest it's the max
     
    else if ((secondNumber >= firstNumber) && (secondNumber >= thirdNumber))
        std::cout << "The maximum of the three numbers is " << secondNumber << ". " << std::endl;
    // run the three inputs through the second set of conditions, if the second number is the biggest it's the max
     
    else if ((firstNumber >= secondNumber) && (firstNumber >= thirdNumber))
        std::cout << "The maximum of the three numbers is " << firstNumber << ". " << std::endl;
    // run the three inputs through the third set of conditions, if the first number is the biggest it's the max
     
    return 0; //end of program
 
}
