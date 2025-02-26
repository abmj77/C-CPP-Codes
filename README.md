# C/C++ Labs And Assignments

## Table_of_Contents

### Assignments
- [Assignment_1_BMI_Calculator](#Assignment_1\bmi_calculator)
- [Assignment_2_1_Math_Functions](#Assignment_2/math_functions)
- [Assignment_2_2_Pi_Approximation](#Assignment_2/pi_approximation)
- [Assignment_3_1_Prime_Numbers](#Assignment_3/prime_numbers)
- [Assignment_3_2_Power_Calculation](#Assignment_3/power_calculation)
- [Assignment_4_Dice_Simulation](#Assignment_4/dice_roll_simulation)

### Labs
- [Lab_1_1_Age_Calculation](#Lab1/calculate_user_age)
- [Lab_1_2_Basic_Arithmetic](#Lab1/basic_arithmetic)
- [Lab_2_1_Age_Calculation_Simple](#Lab2/age_calculator)
- [Lab_2_2_Age_Calculation_Adult_Check](#Lab2/check_age_calculator)
- [Lab_2_3_Age_Calculation_Decade](#Lab2/calculator_age_group)
- [Lab_3_1_Multiples_5](#Lab3/multiples_number)
- [Lab_3_2_Custom_Multiples](#Lab3/calculating_multiples)
- [Lab_4_1_Do_While_Demo](#Lab4/use_do_while_loop)
- [Lab_4_2_Sum_Calculator](#Lab4/use_do_while_loop_v2)
- [Lab_5_1_Fibonacci_Series](#Lab5/fibonacci_series)
- [Lab_5_2_Factorial_Calculation](#Lab5/factorial_number)
- [Lab_6_1_Array_Size](#Lab6/number_elements_array)
- [Lab_6_2_Array_Merge](#Lab6/merge_two_arrays)
- [Lab_6_3_Char_Array_Merge](#Lab6/merge_two_char_arrays)
- [Lab_7_1_2D_Array_Input](#Lab7/2d_array_input)
- [Lab_7_2_2D_Array_Static](#Lab7/2d_array_predefined)
- [Lab_7_3_Power_Array](#Lab7/dynamic_array_squares)

---

This repository contains a collection of C/C++ programs developed as part of assignments and lab exercises. These programs cover foundational programming concepts, including input/output, control structures, functions, arrays, and mathematical computations.

## Assignments

- **Assignment_1_BMI_Calculator**
  - Calculates Body Mass Index (BMI) based on user-provided weight and height.
  - Categorizes BMI into underweight, normal weight, overweight, or obese ranges.
  - Uses basic input/output and conditional statements.

- **Assignment_2_1_Math_Functions**
  - Demonstrates the use of standard C math library functions (sqrt, cbrt, exp, log, etc.).
  - Prints results of various mathematical operations with formatted output.
  - Introduces the `<math.h>` library.

- **Assignment_2_2_Pi_Approximation**
  - Approximates the value of Pi using the Leibniz formula.
  - Tracks iterations needed to reach specific precision levels (e.g., 3.141, 3.1415, 3.14159).
  - Uses loops and conditional logic for iterative refinement.

- **Assignment_3_1_Prime_Numbers**
  - Identifies and counts prime numbers between 1 and 10,000.
  - Implements a helper function to check primality.
  - Uses loops and modular arithmetic.

- **Assignment_3_2_Power_Calculation**
  - Computes the power of a base number raised to an exponent using recursion.
  - Takes user input for base and exponent.
  - Demonstrates recursive function implementation.

- **Assignment_4_Dice_Simulation**
  - Simulates rolling two dice 36,000 times using random number generation.
  - Compares observed frequencies of sums (2-12) with expected probabilities.
  - Uses arrays, loops, and the `<stdlib.h>` library for randomization.

## Labs

- **Lab_1_1_Age_Calculation**
  - Calculates a user's age based on their birth year and current year.
  - Takes a name as input and displays it with the calculated age.
  - Uses C++ `<string>` and `<iostream>` for input/output.

- **Lab_1_2_Basic_Arithmetic**
  - Performs addition, subtraction, multiplication, and division on two user-input numbers.
  - Demonstrates basic input/output in C.

- **Lab_2_1_Age_Calculation_Simple**
  - Calculates age from year of birth and current year.
  - Prints entered values and result.
  - Uses basic C input/output.

- **Lab_2_2_Age_Calculation_Adult_Check**
  - Extends age calculation to classify the user as an adult (age > 18) or minor.
  - Introduces `if-else` conditional statements.

- **Lab_2_2_Age_Calculation_Decade**
  - Calculates age and categorizes it into decades (e.g., teens, twenties) using a `switch` statement.
  - Enhances user feedback with age range.

- **Lab_3_1_Multiples_5**
  - Lists all multiples of 5 from 0 to a user-specified positive number.
  - Ensures positive input using a `while` loop.

- **Lab_3_2_Custom_Multiples**
  - Lists multiples of a user-specified number up to a limit.
  - Handles positive input validation for both the limit and multiplier.

- **Lab_4_1_Do_While_Demo**
  - Demonstrates a `do-while` loop by printing values from 0 to 3.
  - Introduces loop control basics.

- **Lab_4_2_Sum_Calculator**
  - Continuously sums user-input numbers until 0 is entered.
  - Uses a `do-while` loop with a `break` condition.

- **Lab_5_1_Fibonacci_Series**
  - Generates a Fibonacci series up to a user-specified number of terms.
  - Implements recursion for Fibonacci calculation.

- **Lab_5_2_Factorial_Calculation**
  - Computes the factorial of a positive user-input number using recursion.
  - Validates input to ensure it’s non-negative.

- **Lab_6_1_Array_Size**
  - Displays the number of elements in a predefined integer array.
  - Introduces basic array usage and `sizeof`.

- **Lab_6_2_Array_Merge**
  - Merges two 10-element arrays into a 20-element array alternately.
  - Demonstrates array manipulation and user input.

- **Lab_6_3_Char_Array_Merge**
  - Merges two character arrays into a third by interleaving characters.
  - Handles input until newline or array limit.

- **Lab_7_1_2D_Array_Input**
  - Accepts and displays a 2x3 2D array from user input.
  - Introduces multidimensional array handling.

- **Lab_7_2_2D_Array_Static**
  - Displays a predefined 2x3 2D array.
  - Demonstrates static array initialization.

- **Lab_7_3_Power_Array**
  - Creates an array where each element is the square of its index + 1.
  - Uses `<math.h>` for power calculation.

## Usage

1. Compile each file using a C/C++ compiler (e.g., `gcc` or `g++`).
   - Example: `gcc Assignment_1_BMI_Calculator.c -o Assignment_1_BMI_Calculator`
   - Example: `g++ Lab_1_1_Age_Calculation.cpp -o Lab_1_1_Age_Calculation`
2. Run the executable.
   - Example: `./Assignment_1_BMI_Calculator`
3. Follow the on-screen prompts to input data where required.

## Requirements

- C/C++ compiler (e.g., GCC or G++).
- Standard libraries: `<stdio.h>`, `<string>`, `<iostream>`, `<math.h>`, `<stdlib.h>`, `<time.h>`.

## Notes

- Lab_1_1 uses C++ features; most other programs are C-based.
- Ensure proper input validation when prompted, as some programs assume valid user input.
- Assignment_4_Dice_Simulation requires `<time.h>` for seeding the random number generator.

## Author
Abdulmajeed Abdullah
