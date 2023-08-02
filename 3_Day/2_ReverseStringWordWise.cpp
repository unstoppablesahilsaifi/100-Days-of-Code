/*
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string reverseStringWordWise(string input)
{
    istringstream iss(input);
    vector<string> words;
    string word;
    while (iss >> word) {
        words.push_back(word);
    }

    int left = 0;
    int right = words.size() - 1;
    while (left < right) {
        swap(words[left], words[right]);
        left++;
        right--;
    }

    string reversed;
    for (const string &w : words) {
        reversed += w + " ";
    }

    return reversed; // Return the reversed string
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}




-------------------------------------
Explain this part:

string reversed;
for (const string &w : words) {
    reversed += w + " ";
}


Certainly! Let's break down the code snippet step by step:

cpp
Copy code
string reversed;
for (const string &w : words) {
    reversed += w + " ";
}

1. string reversed;: This line declares an empty string named reversed.
This string will be used to store the reversed version of the input string's words.

2. for (const string &w : words) {: This is a loop that iterates over each word (w) in the words vector.

3.reversed += w + " ";: This line appends the current word w along with a space " " to the reversed string.
This effectively constructs the reversed version of the input string's words while adding spaces between the words. 
The += operator is used to concatenate (append) strings.

4. }: This closes the loop.

5. return reversed;: After the loop, the reversed string contains the complete reversed string with words in reversed order and spaces in between.
The return statement sends this reversed string back to the calling function (main() in this case) to be used as the return value of the reverseStringWordWise function.

*/