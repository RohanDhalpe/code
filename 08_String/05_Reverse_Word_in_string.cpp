#include <iostream>
#include <string>
using namespace std;

string ReverseWord(string s)
{
    int low = 0;
    int high = s.size() - 1;

    string temp = "";
    string ans = "";

    while (low <= high)
    {
        char ch = s[low];
        if (ch != ' ')
        {
            temp += ch;
        }
        else if (ch == ' ')
        {
            if (ans != "")
            {
                ans = temp + " " + ans;
            }
            else
            {
                ans = temp;
            }
            temp = "";
        }
        low++;
    }

    if (temp != "")
    {
        if (ans != "")
        {
            ans = temp + " " + ans;
        }
        else
        {
            ans = temp;
        }
    }

    return ans;
}

int main()
{
    string s = "Hello Programmer World";
    cout << "Before Reversing :";
    cout << s<<endl;
    cout << "After Reversing :";
    cout<<ReverseWord(s);
    return 0;
}