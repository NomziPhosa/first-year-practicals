#include <iostream>
#include <string>
// DO NOT MODIFY THE CODE BEFORE LINE 15
void checkType(int) {
    std::cout << "int" << std::endl;
}
void checkType(float) {
    std::cout << "double" << std::endl;
}
void checkType(double) {
    std::cout << "double" << std::endl;
}
void printSection() {
    std::cout << "###" << std::endl;
}

int main() {
//DO NOT CHANGE ANY CODE ABOVE THIS LINE
        printSection();
        int a = 2;//floor division occurs in int hence i changed 2.5 to 2
        std::cout << a << std::endl;
        checkType(a);

        printSection();
        
        float b = 3.7;//this value can be a float or a double
        std::cout << b << std::endl;
        checkType(b);

        printSection();
        
        std::string str = "AssignMe"; //the qoutation marks used are used for a character not a string
        std::cout << str << std::endl;

        printSection();
        
        int additionResult = 2 + 2;//the subtraction was used, now I have changed it
        std::cout << additionResult << std::endl;

        printSection();

        int denominator = 1;
        denominator++;//the decrement operator was used instead of the increment operator
        int divisionResult = 2 / denominator;
        std::cout<<divisionResult<<std::endl;

        printSection();

        float numerator = 2.5;
        float faultyDivision = numerator / 1.6;//changed int to float
        std::cout<<faultyDivision<<std::endl;
        checkType(faultyDivision);

        printSection();

        int numerator2 = 5;
        float denominator2 = 2;//changed int to float
        float divisionResultFloat = numerator2 / denominator2;
        std::cout << divisionResultFloat << std::endl;
        checkType(divisionResultFloat);

        printSection();

}