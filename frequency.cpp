#include <iostream>
#include <sstream>
#include <map>
#include <cctype>
#include <algorithm>
#include <string>

// Function to convert a string to lowercase
std::string toLowercase(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    std::string paragraph;
    std::cout << "Enter a paragraph (end input with an empty line):" << std::endl;
    
    // Read the entire paragraph
    std::string line;
    while (std::getline(std::cin, line) && !line.empty()) {
        paragraph += line + " ";
    }
    
    std::map<std::string, int> wordFrequency;
    std::istringstream stream(paragraph);
    std::string word;

    // Count the frequency of each word
    while (stream >> word) {
        // Remove punctuation from the word
        word.erase(std::remove_if(word.begin(), word.end(), [](char c) {
            return std::ispunct(c);
        }), word.end());
        // Convert to lowercase
        word = toLowercase(word);
        // Update the frequency count
        if (!word.empty()) {
            wordFrequency[word]++;
        }
    }

    // Print the word frequencies
    std::cout << "Word frequencies:" << std::endl;
    for (const auto& pair : wordFrequency) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
