#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <sstream>
using namespace std;
/* int main() {
     string str("О па па");

     cout << str <<  endl;

     replace(str.begin(), str.end(), ' ', '\t');

     cout << str <<  endl;
}*/

/* int main() {
     string str("123 gs sdg ");

     cout << str <<  endl;

    int
        nn = count_if(str.begin(), str.end(), isdigit),
        nc = count_if(str.begin(), str.end(), isalpha),
        ne = count_if(str.begin(), str.end(), [](char c) { return !(isalpha(c) || isdigit(c)); });

     cout << nn << " " << nc << " " << ne <<  endl;
}
*/
/*int main() {
     string str("Опа опа опаап 1513315"), word;
     stringstream sstr;
    int nword = 0, slen = 0;

    sstr << str;

    while (false == sstr.eof()) {
        sstr >> word;
        ++nword;
        slen += word.length();
    }

    if (0 == nword)
         cout << "Длина строки:";
    else
        cout << nword << " " << slen << " " << 1. * slen / nword <<  endl;
}*/


/*int main() {                 //палиндром 
     string str("123123312");

     string buf = str;
     reverse(buf.begin(), buf.end());

     cout << (str == buf ? "true" : "false") << endl;
}*/

/*void Del(char*& s, int pos) // yдалить 
{
    int size = 0;
    while (s[++size]);

    if (size < pos)
        return;

    char* r = new char[size];
    for (int i = 0, j = 0; i < size; ++i, j++)
    {
        if (i != pos)
            r[j] = s[i];
        else
            --j;
    }

    r[size - 1] = '\0';

    delete[] s;
    s = r;
}*/

/*void remove(char* arr, char ch)
{
    const char* old = arr;
    while (*old)
    {
        if (*old != ch) {
            *arr = *old;
            ++arr;
        }
        ++old;
    }
    *arr = '\0'; 
}
*/
void Insert(char* s, int len, int k, char ch)
{
    for (int i = len; i > k - 2; i--)
        s[i + 1] = s[i];
    s[k - 1] = ch;
}


 