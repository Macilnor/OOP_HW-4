#pragma once

#include <cassert>
#include <iostream>

using namespace std;

class ArrayInt
{
private:
    int m_length;
    int* m_data;
public:
    ArrayInt();

    ArrayInt(int length);

    void erase();

    int getLength() const;

    int& operator[](int index);

    void resize(int newLength);

    void insertBefore(int value, int index);

    void push_back(int value);
    void push_front(int value);

    void pop_back();
    void pop_front();

    void sort();

    void print() const;

    ~ArrayInt();

};

