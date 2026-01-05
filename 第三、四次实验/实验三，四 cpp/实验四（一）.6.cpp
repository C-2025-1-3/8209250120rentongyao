#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void count(const char s[], int counts[]) 
{
    for (int i = 0; i < 26; i++)
    {
        counts[i] = 0;
    }

    int len = strlen(s);
    for (int i = 0; i < len; i++) 
    {
        if (isalpha(s[i])) 
        {
            char lowerCh = tolower(s[i]);
            int index = lowerCh - 'a';
            counts[index]++;
        }
    }
}

int main()
{
    char s[100];
    int counts[26];
    cout << "Enter a string: ";
    cin.getline(s, 100);

    count(s, counts);

    for (int i = 0; i < 26; i++) 
    {
        if (counts[i] != 0) 
        {
            cout << char('a' + i) << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}