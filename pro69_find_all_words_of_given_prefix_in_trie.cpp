#include <iostream>
#include <vector>
#include <string>
using namespace std;
class TrieNode
{
public:
    char value;
    bool isTerminal;
    TrieNode *childeren[26];

    TrieNode(char ch)
    {
        this->value = ch;
        this->isTerminal = false;
        for (int i = 0; i < 26; i++)
        {
            childeren[i] = NULL;
        }
    }
};
void insertWord(TrieNode *root, string word)
{
    // Base case
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }
    // 1 case hum solve karege
    char ch = word[0];
    int index = ch - 'a';
    TrieNode *childNode;
    if (root->childeren[index] != NULL)
    {
        // present vala case
        childNode = root->childeren[index];
    }
    if (root->childeren[index] == NULL)
    {
        // absent vala case
        childNode = new TrieNode(ch);
        root->childeren[index] = childNode;
    }
    // Baki ka recursion dekh lega
    insertWord(childNode, word.substr(1));
}
void storeWords(TrieNode *root, vector<string> &ans, string inputStr, string &prifix)
{
    // Base case
    if (root->isTerminal == true)
    {
        ans.push_back(prifix + inputStr);
    }
    for (char ch = 'a'; ch < 'z'; ch++)
    {
        int index = ch - 'a';
        TrieNode *nxt = root->childeren[index];
        if (nxt != NULL)
        {
            inputStr.push_back(ch);
            storeWords(nxt, ans, inputStr, prifix);
            inputStr.pop_back();
        }
    }
}
void findWords(TrieNode *root, vector<string> &ans, string inputStr, string &prifix)
{
    // Base case
    if (inputStr.length() == 0)
    {
        TrieNode *lastChar = root;
        storeWords(lastChar, ans, inputStr, prifix);
        return;
    }

    char ch = inputStr[0];
    int index = ch - 'a';
    TrieNode *childNode;
    if (root->childeren[index] == NULL)
    {
        return;
    }
    else
    {
        childNode = root->childeren[index];
    }
    findWords(childNode, ans, inputStr.substr(1), prifix);
}
int main()
{
    TrieNode *root = new TrieNode('-');
    insertWord(root, "cater");
    insertWord(root, "care");
    insertWord(root, "case");
    insertWord(root, "love");
    insertWord(root, "lover");
    insertWord(root, "load");
    insertWord(root, "car");
    vector<string> ans;
    string inputStr = "ca";
    string prifix = "ca";
    findWords(root, ans, inputStr, prifix);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}