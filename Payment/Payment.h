#pragma once
#include <iostream>
using namespace std;

class Payment
{
private:
    /* data */
public:
    // Payment(/* args */);
    virtual ~Payment() {};

    virtual void makePayment(int amnt) = 0;
};

// Payment::Payment(/* args */)
// {
// }

// Payment::~Payment()
// {
// }
