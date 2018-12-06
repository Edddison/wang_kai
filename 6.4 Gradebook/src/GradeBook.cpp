#include<iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name)
:maximumGrade(0)
{
    setCourseName(name);
}


void GradeBook::setCourseName(string name)
{
    if (name.size()<=25)
        courseName=name.substr(0,25);
    else
        cerr <<"Name\""<<name<<"\"exceed maximum length(25).\n"<<"Limiting courseName to first 25 characters.\n"<<endl;
}

string GradeBook::getCourseName() const
{
    return courseName;
}

int GradeBook::maximum(int x,int y,int z)const
{
  int maximumValue =x;

  if (y>maximumValue);
    {
        maximumValue=y;
    }

  if (z>maximumValue);
  {
      maximumValue=z;
  }

  return maximumValue;
}

void GradeBook::displayMessage()const
{
    cout<<"welcome to the GradeBook for:\n"<<getCourseName();
}

void GradeBook::inputGrades()
{
    int grade1;
    int grade2;
    int grade3;
    cout <<"\nEnter three integer grades:";
    cin>>grade1>>grade2>>grade3;
    maximumGrade=maximum(grade1,grade2,grade3);
}

void GradeBook::displayGradeReport()const
{
    cout <<"Maximum of grades entered:"<<maximumGrade<<endl;
}
