#include <bits/stdc++.h>
#include <string.h>

using namespace std;


int marsExploration(string s) 
{
    char a = 'S';
    char b = 'O';
    int x = 0, i;
    int len = s.length();
    
    for (i = 0; i < len; i+=3)
    {
        if(s[i] != a)
        {
            x += 1;
        }
        if(s[i+1] != b)
        {
            x += 1;
        }
        if(s[i+2] != a)
        {
            x += 1;
        }
    }
    return x;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
