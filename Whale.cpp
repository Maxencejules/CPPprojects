#include <iostream>
#include <vector>
#include <string>

int main() {
    // Whale, whale, whale.
    // What have we got here?
    std::string input = "turpentine and turtles";

    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> result;

    // Iterate through the input string
    for (int i = 0; i < input.size(); i++) {
        // Nested loop to check each character against each vowel
        for (int j = 0; j < vowels.size(); j++) {
            // If the character is a vowel, add it to the result vector
            if (input[i] == vowels[j]) {
                result.push_back(input[i]);
                // Double the 'e's and 'u's
                if (input[i] == 'e' || input[i] == 'u') {
                    result.push_back(input[i]);
                }
                // If the character is an exclamation point, double the last vowel
                if (input[i] == '!' && !result.empty()) {
                    result.push_back(result[result.size() - 1]);
                }
            }
        }
    }

    // Output the result
    for (int k = 0; k < result.size(); k++) {
        std::cout << result[k];
    }

    return 0;
}
