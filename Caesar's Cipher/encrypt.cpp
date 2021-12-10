#include <iostream>
using namespace std;
 
string encrypt(string text, int s)
{
    string result = "";
 
    // traverse text
    for (int i=0;i<text.length();i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);
 
    // Encrypt Lowercase letters
    else
        result += char(int(text[i]+s-97)%26 +97);
    }
 
    // Return the resulting string
    return result;
}
 
int main()
{
    string text;
    int s;
    cout << "Text : ";
    cin >> text;
    cout << "Shift: ";
    cin >> s;
    cout << "Cipher: " << encrypt(text, s);
    cout << "\n";
    return 0;
}