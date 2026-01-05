#pragma once

#include "Payment.h"
#include "UpiPayment.h"
#include "CardPayment.h"
#include "../Utils/Logger.h"

#include <string>
#include <stdexcept>

class PaymentFactory
{
public:
    static Payment *createPayment(const std::string &type)
    {
        if (type == "UPI")
        {
            return new UpiPayment();
        }
        else if (type == "CARD")
        {
            return new CardPayment();
        }
        else
        {
            Logger::getInstance()->log("Invalid payment type selected");
            throw std::invalid_argument("Invalid Payment Type");
        }
    }
};
