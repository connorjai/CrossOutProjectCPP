//Name: Connor Gladish
//Date: 04/05/23
//Description: Cross Out
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void crossOutChar(string& sentence, char letter, int& numCrossedOut) {
    for (int i = 0; i < sentence.length(); i++) {
        if (tolower(sentence[i]) == tolower(letter)) {
            sentence[i] = 'X';
            numCrossedOut++;
        }
    }
}

void removeChar(string& sentence, char letter) {
    sentence.erase(remove(sentence.begin(), sentence.end(), letter), \
        sentence.end());
}

void crossOutString(string& sentence, string letters, int& numCrossedOut) {
    for (char letter : letters) {
        crossOutChar(sentence, letter, numCrossedOut);
    }
}

int main() {
    string sentence;
    string letters;
    int numCrossedOut = 0;

    cout << "Enter a string: ";
    getline(cin, sentence);

    cout << "Enter letters to cross out: ";
    getline(cin, letters);

    if (letters.length() == 1) {
        crossOutChar(sentence, letters[0], numCrossedOut);
    }
    else if (letters.length() > 1) {
        crossOutString(sentence, letters, numCrossedOut);
    }

    cout << "Here you go: " << sentence << endl;
    cout << "There were " << numCrossedOut << " letters crossed out." << endl;

    return 0;
}
//https://cplusplus.com/reference/string/string/erase/
//https://stackoverflow.com/questions/20925990/calling-functions-within-
//another-function
//http://www.cplusplus.com/doc/tutorial/
//https://stackoverflow.com/questions/2564873/how-do-i-use-reference-
//parameters-in-c
//https://www.programiz.com/cpp-programming/arrays

//Hard project for no reason.
//Took me a LONG time and I know it's not that hard.