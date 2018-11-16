#include "GradeBook.h"
#include<iostream>
#include<cstdio>

using namespace std;

GradeBook::GradeBook(string name)
:a(0),b(0),c(0),d(0),e(0)
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    if (name.size()<=25)
        courseName=name;
    else
        courseName=name.substr(0,25);
}

string GradeBook::getCourseName() const
{
    return courseName;
}

void GradeBook::displaymessage() const
{
    cout<<"welcome to the Grade Book for:"<<getCourseName()<<"!\n";
}

void GradeBook::inputGrades()
{
    int grade;
    cout<<"Enter the letter grades.";
    cout<<"Enter the EOF character to end input.\n";

    while((grade=cin.get())!=EOF)
    {
        switch(grade)
        {
        case'A':
            ++a;
            break;

        case'B':
            ++b;
            break;

        case'C':
            ++c;
            break;

        case'D':
            ++d;
            break;

        case'E':
            ++e;
            break;

        case' ':
        case'\n':
        case'\t':
            break;

        default:
            cout<<"Incorrect letter grade entered."<<"Enter a new grade.\n";
            break;
        }
    }
}

void GradeBook::displayAverage() const
{
    int average=0;
    average=(4*a+3*b+2*c+1*d)/(a+b+c+d+e);

    cout<<"Average of all grades is:"<<average;
}

