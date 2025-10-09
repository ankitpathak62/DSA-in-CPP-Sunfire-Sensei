#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("tab.txt");
    fout << "This is tab space \t between two words" << endl;
    fout << "This is me Ankit Pathak" << endl;
    fout << "I am from Varanasi" << endl;
    fout.close();

    ifstream fin;
    fin.open("tab.txt");
    string str;
   
    while(getline(fin, str))
    {
        cout << str << endl;
    }
    fin.close();
}