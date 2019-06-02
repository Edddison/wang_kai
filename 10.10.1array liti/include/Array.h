#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>

using namespace std;

class Array
{
    friend ostream &operator<<(ostream &,const Array &);
    friend istream &operator>>(istream &,Array &);

public:
    explicit Array(int = 10);
    Array(const Array &);
    ~Array();
    size_t getSize() const;

    const Array &operator=(const Array &);
    bool operator==(const Array &)const;

    bool operator!=(const Array &right )const
    {
        return ! (*this ==right);
    }

    int &operator[](int);

    int operator[](int)const;

private:
    size_t size;
    int *ptr;
};

#endif // ARRAY_H
