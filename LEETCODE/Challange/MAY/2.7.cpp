#include <bits/stdc++.h>
using namespace std;

class Trie
{

    bool isEnd;
    Trie *children[26];

public:
    Trie()
    {
        isEnd = false;
        for (auto &a : children)
            a = nullptr;
    }

    void insert(string word)
    {
        Trie *curr = this;
        for (char c : word)
        {
            if (!(curr->children[c - 'a']))
                curr->children[c - 'a'] = new Trie;
            curr = curr->children[c - 'a'];
        }
        curr->isEnd = true;
    }

    bool search(string word)
    {
        Trie *curr = this;
        for (char c : word)
        {
            if (!(curr->children[c - 'a']))
                return false;
            curr = curr->children[c - 'a'];
        }

        if (curr->isEnd)
            return true;
        return false;
    }

    bool startsWith(string prefix)
    {
        Trie *curr = this;
        for (auto c : prefix)
        {
            if (!(curr->children[c - 'a']))
                return false;
            curr = curr->children[c - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */