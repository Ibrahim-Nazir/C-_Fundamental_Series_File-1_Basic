#include <iostream>
#include <string>
#include <cctype> // Required for std::tolower

using namespace std;

int main() {
    string text;
    // Use int for counters, not string
    int vowelCount = 0; 
    int consonantCount = 0;

    cout << "Enter any sentence or word: ";
    // Use std::getline to read the entire line, including spaces
    getline(cin, text);

    // Iterate through the string using the modern range-based for loop
    for (char character : text) {
        // 1. Convert the character to lowercase for case-insensitive checking
        char lowerChar = tolower(character);

        // 2. Check if the character is an alphabet (a-z)
        // We use isalpha() from <cctype> for simplicity and robustness
        if (isalpha(character)) {
            
            // 3. If it is an alphabet, check if it is a vowel
            if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || 
                lowerChar == 'o' || lowerChar == 'u') {
                
                vowelCount++;
            } 
            // 4. If it's an alphabet but not a vowel, it is a consonant
            else {
                consonantCount++;
            }
        }
        // Non-alphabetic characters (spaces, numbers, punctuation) are ignored.
    }

    cout << "\n--- Results ---" << endl;
    cout << "Total **Vowels** is = " << vowelCount << endl;
    cout << "Total **Consonants** is = " << consonantCount << endl;
    
    return 0;
}
