#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int word_count(string texts)
{
    int words=0;
    stringstream total_words (texts);
    string w;

    while (total_words >> word)
    {
        words++;
    }

    return words;
}

int main()
{
    string NameofFile;
    cout << "Enter the name of the file with extension: ";
    getline (cin, NameofFile);

    ifstream file(NameofFile);

    if (!file)
    {
        cout << "Error!! This file is not opening, please enter proper file name." << "\n";
    }

    string inside;
    string line;

    while (getline(file, line))
    {
        content += line + "";
    }

    int wordCount = word_count(inside);

    cout<<"Total words in this file are: " <<wordCount << "\n";
    file.close();

    return 0;
}
