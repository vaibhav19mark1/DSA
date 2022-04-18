#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    bool isWord;
    node *next[26];
    node()
    {
        for (int i = 0; i < 26; i++)
        {
            next[i]=NULL;
        }
    }
};

node *newNode()
{
    node *head = new node;
    head->isWord = false;
    return head;
}

void insert(node *head, string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((head->next[s[i] - 'a']) == NULL)
        {
            head->next[s[i] - 'a'] = newNode();
        }
        head = head->next[s[i] - 'a'];
    }
    head->isWord = true;
}

bool search(node *head, string s)
{
    if (head->next == NULL)
        return false;
    for (int i = 0; i < s.length(); i++)
    {
        if ((head->next[s[i] - 'a']) == NULL)
        {
            return false;
        }
        head = head->next[s[i] - 'a'];
    }
    return head->isWord;
}

bool prefix(node *head)
{
    for (int i = 0; i < 26; i++)
    {
        if (head->next[i])
            return false;
    }
    return true;
}

node *deleteWord(node *head, string s, int i)
{
    if (head == NULL)
        return NULL;
    if (i == s.length())
    {
        if (head->isWord)
            head->isWord = false;
        if (prefix(head))
        {
            delete (head);
            head = NULL;
        }
        return head;
    }
    head->next[s[i] - 'a'] = deleteWord(head->next[s[i] - 'a'], s, i + 1);
    return head;
}

int main()
{
    node *trie = newNode();
    int ch;
    do
    {
        cout << "1. Insert\n2. Search\n3. Delete\n4. Exit\n";
        cin >> ch;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        switch (ch)
        {
        case 1:
            insert(trie, s);
            break;
        case 2:
        {
            if (search(trie, s))
                cout << s << " found\n";
            else
                cout << s << " not found\n";
            break;
        }
        case 3:
            if (search(trie, s))
                deleteWord(trie, s, 0);
            break;
        case 4:
            break;
        }
    } while (ch <= 3);
    return 0;
}
