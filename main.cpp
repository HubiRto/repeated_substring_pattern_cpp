#include <iostream>

int main() {
    std::string s = "ab";
    bool isSubstring = true;

    char firstLetterOfPattern = s.at(0);
    std::string pattern;
    pattern.push_back(firstLetterOfPattern);

    int counter = 1;
    while (s[counter] != firstLetterOfPattern) {
        pattern.push_back(s[counter]);
        counter++;
    }

    for (int i = 0; i < counter; i++) {
        if(s[i+counter] != pattern[i]) isSubstring = false;
    }

    std::cout << isSubstring;

    return 0;
}
