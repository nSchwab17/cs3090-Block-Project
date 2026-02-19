/**
 * Class used to check that a password has the right amount of character length,
 * special characters, and capitalization
 * 
 * @author Niko Schwab
 * @date February 19, 2026
 */

 #include <string>
 #include <iostream>

class PassWordChecker {

public:
    /**
     * Checks if the users password has atleast 9 characters, 2 special characters,
     * and one uppercase character.
     * 
     * @param password the users password to check
     */
     bool EvaluatePassword(std::string password) {

        if (password.length() < 9) 
            return false;
        
        if (!checkSpecialCharacters(password)) 
            return false;
        
        if (!checkUppercase(password)) 
            return false;
        
        return true;
    }
        
private:
    // Checks for atleast 2 special characters
    bool checkSpecialCharacters(const std::string& password) {
        int counter = 0;
        const std::string specials = "!@#$%^&*()_+-={}[]|\\:;\"'<>,.?/~`";
        for (char c : password) {

            if (specials.find(c) != std::string::npos)
                counter++;

            if (counter = 2)
                return true;
        }
        return false;
    }

    // Checks that there is atleast one uppercase character
    bool checkUppercase(const std::string& password) {
        for (unsigned char c : password) {
            if (std::isupper(c)) 
                return true;
        }
        return false;
    }
};

int main() {
    PassWordChecker checker;
    std::string password;

    std::cout << "atleast 2 special, one uppercase, and 9 total characters";
    std::cout << "Enter password: ";
    std::cin >> password;

    if (checker.EvaluatePassword(password)) {
        std::cout << "valid password" << std::endl;
    } else {
        std::cout << "invalid password" << std::endl;
    }

    return 0;
}
