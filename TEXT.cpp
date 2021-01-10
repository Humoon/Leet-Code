#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;



int main()
{
	string str;
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "תСд: " << str << endl;
    return 0;
}
