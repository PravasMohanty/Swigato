#pragma once
#include <iostream>
#include "Payment.h"
#include "../Utils/logger.h"

using namespace std;

class CardPayment : public Payment
{
private:
public:
    void makePayment(int amnt) override
    {
        Logger::getInstance()->log("Initiating A Card Payment");
        cout << "Payment made of Rs " << amnt << " via UPI ..." << endl;
        Logger::getInstance()->log("Payment Successful");
    }
    ~CardPayment() override
    {
        cout << "Removing Card Payment Object" << endl
             << "Freeing Memory ..." << endl;
        Logger::getInstance()->log("Destroying CardPayment Object");
    }
};