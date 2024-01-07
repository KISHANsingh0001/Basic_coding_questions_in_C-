#include <iostream>
#include<vector>
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
bool searchInTrie(TrieNode *root, string word)
{
    // Base case
    if (word.length() == 0)
    {
        return root->isTerminal;
    }
    // 1 case hum solve karege
    char ch = word[0];
    int index = ch - 'a';
    TrieNode *childNode;
    if (root->childeren[index] == NULL)
    {
        return false;
    }
    if (root->childeren[index] != NULL)
    {
        childNode = root->childeren[index];
    }
    return searchInTrie(childNode, word.substr(1));
}
void deleteInTrie(TrieNode *root, string word)
{
    // Base case
    if (word.length() == 0)
    {
        root->isTerminal = false;
        return;
    }
    // 1 case hum solve karege
    char ch = word[0];
    int index = ch - 'a';
    TrieNode *childNode;
    if (root->childeren[index] == NULL)
    {
        return;
    }
    if (root->childeren[index] != NULL)
    {
        childNode = root->childeren[index];
    }
    return deleteInTrie(childNode, word.substr(1));
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
   
    cout << "searching the string before deletion" << endl;
    if (searchInTrie(root, "love"))
    {
        cout << "string is Found..." << endl;
    }
    else
    {
        cout << "string is not Found..." << endl;
    }
    deleteInTrie(root, "love");
    cout << "Again searching the string after deletion" << endl;
    if (searchInTrie(root, "love"))
    {
        cout << "string is Found..." << endl;
    }
    else
    {
        cout << "string is not Found..." << endl;
    }
    return 0;
}