
/* Copyright 2023 Birdzhan
 * accountwith.h
 *
 *  Created on: 09.02.2023
 *      Author: Birdzhan Ali
 */
/**
 * @class UserService
 * @brief The UserService class creates a user and sends a welcome messages to the user
 *
 */
class UserService {
 public:
  /**
   * @brief Constructor for UserService
   *
   * @param emailService the messages  service to use for sending the welcome messages
   */
  explicit UserService(Account& emailService);

  /**
   * @brief Creates a user and sends a welcome messages to the user
   *
   * @param name the name of the user
   * @param email the email address of the user
   */
  void create_user(const std::string& name, const std::string& email);

 private:
  Account& emailService_;
};
