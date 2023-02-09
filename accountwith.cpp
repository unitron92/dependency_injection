/* Copyright 2023 Birdzhan
 * accountwith.h
 *
 *  Created on: 09.02.2023
 *      Author: Birdzhan Ali
 */

#include <iostream>
#include <string>
#include"accountwith.h"

class Account
{
public:
    virtual void send_chat(const std::string& message, const std::string& recipient) = 0;
};

class Chat: public Account
{
public:
    void send_chat(const std::string& message, const std::string& recipient) override
    {
        
        std::cout << "Sending messsages to " << recipient <<" "<< message << " using Teams" << std::endl;
    }
};

class UserService
{
private:
    Account& emailService;

public:
    UserService(Account& emailService) : emailService(emailService) {}

    void create_user(const std::string& name, const std::string& email)
    {
        
        std::cout << "User with name: " << name << std::endl;
        emailService.send_chat("Welcome to our service,", email);
    }
};

int main()
{
    Chat smtpEmailService;
    UserService userService(smtpEmailService);
    userService.create_user("Birdzhan Ali", "unitron6@gmail.com, ");
    return 0;
}
