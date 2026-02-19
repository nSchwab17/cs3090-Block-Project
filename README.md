# Block Project 2: Valid Password Checker #
**This program takes in the users password and runs through three checks varifying that it is strong enough for the application.** <br>

**First**, the program checks if the password is atleast 9 characters long. <br>
**Second**, runs through a method that counts the amount of special characters, ensuring there are atleast two somewhere in the password. <br>
**Lastly**, the program checks for atleast one uppercase character somewhere in the password. <br>

**How to compile**, g++ passwordChecker.cpp -o passwordChecker <br>
                        ./passwordChecker

**Notes:**<br>
* When an invalid password is given, the prompt for a valid password will be asked for again.<br>
**Limitations / Warnings**<br>
* Educational use only. This is a basic rule-based checker and should not be used to secure sensitive information.<br>
* Not a security guarantee. Passing these rules does not mean a password is strong or safe.<br>
* No storage or hashing. The program does not store passwords or apply cryptographic hashing.<br>
* Rule set is minimal. It does not check for common passwords, dictionary words, repeated patterns, or other weaknesses.<br>