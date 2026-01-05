#pragma once
#include <iostream>
#include "Payment.h"
#include "../Utils/logger.h"

using namespace std;

class UpiPayment : public Payment
{
private:
    /* data */
public:
    void makePayment(int amnt) override
    {
        Logger::getInstance()->log("Initiating UPI payment");
        cout << "Payment made of Rs " << amnt << " via UPI ..." << endl;
        Logger::getInstance()->log("Payment Successful");
    }

    ~UpiPayment() override
    {
        cout << "Removing UPI Payment Object" << endl
             << "Freeing Memory ..." << endl;
        Logger::getInstance()->log("Destroying UpiPayment Object");
    }
};
