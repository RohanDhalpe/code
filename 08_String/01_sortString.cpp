#include <iostream>
#include <vector>
#include <string>
using namespace std;

void sortString(string &str)
{
    vector<int> freq(26, 0);

    for (int i = 0; i < str.length(); i++)
    {
        int index = str[i] - 'a';
        freq[index]++;
    }

    int j = 0;
    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            str[j++] = i + 'a';
        }
    }
}

int main()
{
    string str;
    cin >> str;
    cout << endl;
    sortString(str);
    cout << str;

    return 0;
}