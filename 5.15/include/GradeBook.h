#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include<string>
using namespace std;


class GradeBook
{
    public:
        explicit GradeBook(string);
        void setCourseName(string);
        string getCourseName() const;
        void displaymessage()const;
        void inputGrades();
        void displayAverage()const;

    private:
        string courseName;
        unsigned int a;
        unsigned int b;
        unsigned int c;
        unsigned int d;
        unsigned int e;
};

#endif // GRADEBOOK_H
