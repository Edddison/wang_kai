#include <iostream>
#include"GradeBook.h"

using namespace std;

int main()
{
 GradeBook myGradeBook("c++");

 myGradeBook.displaymessage();
 myGradeBook.inputGrades();
 myGradeBook.displayAverage();
}
