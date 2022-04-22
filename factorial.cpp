// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: April. 20, 2022
// This program asks the user to enter a positive number
// and then uses a loop to calculate and display the factor
// of a whole number.


#include <iostream>

#include <string>

int main() {
  // initialize the loop counter and factor
  int counter = 0;
  int facotr = 1;
  std::string user_num_string;
  int user_num_int;

  // get the user number as a string
  std::cout << "Enter a postive number: ";
  std::cin >> user_num_string;
  std::cout << std::endl;

  // convert user input from string to integer
  try {
        user_num_int = std::stoi(user_num_string);
         // run Do while loop to calculate facotor of number
          if (user_num_int < 0) {
              std::cout <<"input was not a positive number" << std::endl;
              exit(main());
}
          do {
              counter = counter + 1;
              facotr = facotr * counter;
              std::cout << "Tracking " << counter << " times through the loop.\n";
  } while (counter < user_num_int);
  // display the factor to the user
  std::cout <<user_num_int <<" ! " << facotr << std::endl;
}

  // catch invalid input
  catch (std::invalid_argument) {
      std::cout <<"Invalid input" << std::endl;
}
}   
  
