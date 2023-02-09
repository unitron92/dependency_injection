/* Copyright 2023 Birdzhan
 * accountwith.h
 *
 *  Created on: 09.02.2023
 *      Author: Birdzhan Ali
 */
#include <iostream>
#include <string>

// Implementation that does not apply the concept of dependency injection:

class Email
{
public:
    void send_email(const std::string& message, const std::string& recipient)
    {
        // Code to send email
        std::cout << "Sending email to " << recipient << " with message: " << message << std::endl;
    }
};

class User
{
private:
    Email emailService;

public:
    void create_user(const std::string& name, const std::string& email)
    {
        // Code to create user
        std::cout << "Creating user with name: " << name << std::endl;
        emailService.send_email("Welcome to our service!", email);
    }
};

int main()
{
    User userService;
    userService.create_user("Birdzhan Ali", "unitron6@gmail.com");
    return 0;
}