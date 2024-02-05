# Introduction 
The program takes input from the user until they enter "q" to quit. It then calculates the average of all scores entered and assigns a final grade based on that average using the calculate_grade() function.
#
The program now includes error handling for invalid inputs when the user enters a non-numeric value instead of a score. The program initializes the score variable to an invalid value of -1, and then tries to convert the input to a double using stod(). If an exception is thrown by stod(), indicating that the input is not a valid number, the program catches the exception and displays an error message asking the user to enter a number. The program then continues with the next iteration of the loop, asking for input again.
#
If no scores are entered, the program displays a message saying "No scores entered." Otherwise, it calculates and displays the final grade based on the average of all scores entered.
