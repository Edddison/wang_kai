#include <iostream>
#include"GradeBook.h"


using namespace std;

int main()
{
    GradeBook myGradeBook ("CS101 C++ ");
    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();
}
