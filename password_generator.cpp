#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(time(0));
    char repeat; 

    do {
        string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";
        string password = "";
        int length;

        cout << "\n**** Secure Password Generator ****" << endl;
        cout << "Enter the password length: ";
        cin >> length;

        if (length <= 0) {
            cout << "Password length must be a positive number greater than 0." << endl;
        } else {
            for (int i = 0; i < length; i++) {
                int randomIndex = rand() % characters.length();
                password += characters[randomIndex];
            }

            
            cout << "\nYour randomlygenerated password is: " << password << endl;
            cout << "- - - - - - - - - - - - - - - -" << endl;
        }

        
        cout << "\nWould you like to get another randomly generated password? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y'); 

    
    cout << "\nSee you next time!" << endl;

    return 0; 
}