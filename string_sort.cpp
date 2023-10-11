#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> words = { "flow", "flower","flight"};

    std::sort(words.begin(), words.end());

    for (const auto& word : words) {
        std::cout << word << " ";
    }

    return 0;
}