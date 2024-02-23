#include <iostream>
#include <string>

int main() {
  // Declare variables to store points for each house
  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
  
  // Declare variables to store answers to quiz questions
  int answer1 = 0, answer2 = 0, answer3 = 0, answer4 = 0;
  
  // Output the start of the quiz
  std::cout << "=====================\n";
  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "=====================\n\n";
  
  // Question 1
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n\n";
  std::cout << "Enter your answer (1-4): ";
  std::cin >> answer1;
  
  // Assign points based on answer to question 1
  if (answer1 == 1) {
    hufflepuff++;
  } else if (answer1 == 2) {
    slytherin++;
  } else if (answer1 == 3) {
    ravenclaw++;
  } else if (answer1 == 4) {
    gryffindor++;
  } else {
    std::cout << "Invalid input\n";
  }
  
  // Question 2
  std::cout << "Q2) Dawn or Dusk?\n\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n\n";
  std::cout << "Enter your answer (1-2): ";
  std::cin >> answer2;
  
  // Assign points based on answer to question 2
  if (answer2 == 1) {
    gryffindor++;
    ravenclaw++;
  } else if (answer2 == 2) {
    hufflepuff++;
    slytherin++;
  } else {
    std::cout << "Invalid input\n";
  }
  
  // Question 3
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n\n";
  std::cout << "Enter your answer (1-4): ";
  std::cin >> answer3;
  
  // Assign points based on answer to question 3
  if (answer3 == 1) {
    slytherin++;
  } else if (answer3 == 2) {
    hufflepuff++;
  } else if (answer3 == 3) {
    ravenclaw++;
  } else if (answer3 == 4) {
    gryffindor++;
  } else {
    std::cout << "Invalid input\n";
  }
  
  // Question 4
  std::cout << "Q4) Which road tempts you most?\n\n";
  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n\n";
  std::cout << "Enter your answer (1-4): ";
  std::cin >> answer4;
  
  // Assign points based on answer to question 4
  if (answer4 == 1) {
    hufflepuff++;
  } else if (answer4 == 2) {
    slytherin++;
  } else if (answer4 == 3) {
    gryffindor++;
  } else if (answer4 == 4) {
    ravenclaw++;
  } else {
    std::cout << "Invalid input\n";
  }
  
  // Find the House with the highest points
  int max = 0;
  std::string house;
  
  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }
  
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  
  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }
  
  // Output the House
  std::cout << "\nCongratulations! You belong to " << house << "!\n";
  
  return 0;
}
