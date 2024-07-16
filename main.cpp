//
//  main.cpp
//  generate a security code
//
//  Created by Martha Fernandez on 7/6/24.
//
//CS1-112-Martha Fernandez- Generate a Security code

//Goal: Generate a security code

  

#include <iostream>

  

using namespace std;

  

int main()

  

{

  

int input, security_digit, secured_number;

   

// input

  

  cout<< "Enter a six-digit positive int number: ";

  cin >> input;

  

// First and Last 3 numbers divided

  

  int first_number = input /1000;

  int last_number = input % 1000;

  

// Add Sums

   

  int sum_of_numbers = first_number + last_number;

  int sum_of_digits = 0;

  

//  From first and second halves, find sum

  

  while (sum_of_numbers > 0)

    {

      sum_of_digits += sum_of_numbers %10; // add last digit

  

      sum_of_numbers /=10; // remove the last digit from sum_of_numbers

       

    }

  

  // If sum is > 10

  

  if (sum_of_digits > 10)

security_digit = sum_of_digits % 7;

  

// if sum is less than 10

  

  else

security_digit = sum_of_digits;

  

// Output

  secured_number = input * 10 + security_digit;

  cout <<

    "Security digit is: " << security_digit << endl;

  cout << "Secured number is: " << secured_number << endl;

    return 0;

     

   

} 
