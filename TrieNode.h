#include <unordered_map>
#include <vector>
using namespace std;
class TrieNode {
public:
    int search_frequency;
    bool isWord;
    unordered_map<char, TrieNode *> child;

    TrieNode() {
        search_frequency = 0;
        isWord = false;
    }

    void insertHistory(string word);

    vector<string> bfsSearch(string word);

    string probableMistake(char c);
};