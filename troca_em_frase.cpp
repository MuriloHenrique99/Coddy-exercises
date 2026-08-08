#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence, wordToReplace, replacementWord;
    // Obtenha a entrada aqui
    std::getline(std::cin, sentence);
    std::cin >> wordToReplace;
    std::cin >> replacementWord;
    sentence.replace(
        sentence.find(wordToReplace), wordToReplace.length(),replacementWord
    );
    
    std::cout << sentence << std::endl;
    return 0;
}
