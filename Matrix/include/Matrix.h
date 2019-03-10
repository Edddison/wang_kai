
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix
{

    friend &operator+(Matrix &,Matrix &);

    public:
          double Matrix(int ,int);


};

#endif // MATRIX_H
