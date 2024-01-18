#include <iostream>
#include <string>
using namespace std;

string decodeAffine(string text, int a, int b) {
    int code = 0;
    int i=1;
    for ( i = 1; i < 26; i++) {
        if ((a * i) % 26 == 1) {
            code = i;
            break;
        }
    }

    string decodedText = "";

    for (char& c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char decodedChar = ((code * (c - base - b + 26)) % 26) + base;
            decodedText += decodedChar;
        } else {
            decodedText += c;
        }
    }//check tung ky tu 

    return decodedText;
}

int main() {
    string encodedText="ykzq bszh hzmsa xgw";
    
    cout << "Ket qua giai ma voi cac ma kha thi:\n";
	int a=1;
    for ( a = 1; a < 26; a++) {
        for (int b = 0; b < 26; b++) {
            string decodedText = decodeAffine(encodedText, a, b);
            cout << "Khoa: (" << a << ", " << b << "): " << decodedText << endl;
        }
    }

    return 0;
}
// Khoa (5, 18): work hard dream big
