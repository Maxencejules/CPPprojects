#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Array of possible fortunes
    const char* fortunes[] = {
        "It is certain.",
        "It is decidedly so.",
        "Without a doubt.",
        "Yes - definitely.",
        "You may rely on it.",
        "As I see it, yes.",
        "Most likely.",
        "Outlook good.",
        "Yes.",
        "Signs point to yes.",
        "Reply hazy, try again.",
        "Ask again later.",
        "Better not tell you now.",
        "Cannot predict now.",
        "Concentrate and ask again.",
        "Don't count on it.",
        "My reply is no.",
        "My sources say no.",
        "Outlook not so good.",
        "Very doubtful."
    };

    // Seed the random number generator
    std::srand(std::time(nullptr));

    // Generate a random index to select a fortune
    int index = std::rand() % (sizeof(fortunes) / sizeof(fortunes[0]));

    // Output the magic 8-ball header and the selected fortune
    std::cout << "MAGIC 8-BALL:\n\n" << fortunes[index] << std::endl;

    return 0;
}
