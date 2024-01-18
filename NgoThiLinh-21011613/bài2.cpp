#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

// H�m t�nh uoc chung lon nhat (GCD)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// H�m t�nh mu theo modulo
int modExp(int base, int exp, int mod) {
    int result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    // Cap so nguy�n to p v� q
    int p = 19;
    int q = 37;

    // T�nh n v� phi(n)
    int n = p * q;
    int phi = (p - 1) * (q - 1);

    // Chon mot so nguy�n e sao cho 1 < e < phi(n) v� gcd(e, phi(n)) = 1
    int e = 2;
    while (e < phi) {
        if (gcd(e, phi) == 1) {
            break;
        }
        e++;
    }

    // T�nh kh�a c�ng khai (n, e)

    // Ma h�a th�ng tin
    string message = "I love Phenikaa";
    vector<int> encrypted;

    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (c == ' ') {
            encrypted.push_back(-1); // Su dung -1 o bieu thi khoang trong
        } else {
            int charValue = c - 'A'; // Chuyen ki tu th�nh so tu 0 den 25
            int cipherValue = modExp(charValue, e, n);
            encrypted.push_back(cipherValue);
        }
    }

    // Ghi ban ma ra tep "rsa-encrypt.dat"
    ofstream outputFile("rsa-encrypt.dat");
    if (outputFile.is_open()) {
        for (int i = 0; i < encrypted.size(); i++) {
            outputFile << encrypted[i] << " ";
        }
        outputFile.close();
        cout << "Thong diep da duoc ma hoa va ghi vao tep rsa-encrypt.dat." << endl;
    } else {
        cout << "Khong the mo tep da ghi ban ma." << endl;
    }

    return 0;
}

