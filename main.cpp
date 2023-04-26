#include <iostream>

int main() {
    std::string s = "ab";
    char firstLetterOfPattern = s.at(0);
    std::string pattern;
    pattern.push_back(firstLetterOfPattern);
    int counter = 1;
    while (s[counter] != firstLetterOfPattern) {
        pattern.push_back(s[counter]);
        counter++;
    }

    std::cout << "Pattern: " << pattern << std::endl;
    if(pattern >= s){
        std::cout << 0;
    }else {
        std::cout << (s.substr(pattern.size() - 1, s.size()).find(pattern) != -1);
    }
    return 0;
}
