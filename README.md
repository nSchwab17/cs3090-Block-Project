# Block Project 2: Valid Password Checker #
**This program takes in the users password and runs through three checks varifying that it is strong enough for the application.** <br>

**First**, the program checks if the password is atleast 9 characters long. <br>
**Second**, runs through a method that counts the amount of special characters, ensuring there are atleast two somewhere in the password. <br>
**Lastly**, the program checks for atleast one uppercase character somewhere in the password. <br>

**How to compile**, g++ passwordChecker.cpp -o passwordChecker
                        ./passwordChecker

**Notes:**
When an invalid password is given, the prompt for a valid password will be asked for again.