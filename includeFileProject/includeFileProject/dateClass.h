#ifndef DATE_CLASS
#define DATE_CLASS

#include <iostream> 
using namespace std;
class DateClass
{
private:
    int m_day;
    int m_month;
    int m_year;

public:

    void addDate();

    //конструктор за замовчуванням
    DateClass()
        : m_day(1), m_month(1), m_year(2000) {
    }

    //специфічний конструктор 
    DateClass(int day, int month, int year)
        : m_day(day), m_month(month), m_year(year) {
    }

    // Перевантаження оператора виводу
    friend std::ostream& operator<<(std::ostream& out, const DateClass& date)
    {
        out << "(" << date.m_day << ", " << date.m_month << ")" << date.m_year << "\n";
        return out;
    }

    // Функція доступу
    void setDate(int day, int month, int year)
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }

};

#endif
#pragma once
