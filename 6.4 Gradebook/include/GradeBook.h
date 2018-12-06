#ifndef GRADEBOOK_H
#define GRADEBOOK_H
using namespace std;


class GradeBook
{
    public:
        explicit GradeBook(string);
        void setCourseName(string);
        string getCourseName()const;
        void inputGrades();
        void displayMessage()const;
        void displayGradeReport()const;
        int maximum(int,int,int )const;
    private:
        string courseName;
        int maximumGrade;
};

#endif // GRADEBOOK_H
