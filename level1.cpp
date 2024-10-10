#include <iostream>
#include <string>
using namespace std;

string decode(string text, int key) {
    string result = "";
    string charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int n = charset.length();
    for (char c : text) {
        int pos = charset.find(c);
        if(isalnum(c)){
            int newPos = (n + pos - key) % n;
            result += charset[newPos];         
        }
        else{
            result += c;
        }
    }
    return result;
}

int main() {
    string s = "YZH(878GBC 8BFC87 8C7999 F8AFB ADA8GG 8GGCC7 A7F9EG 8BFDAB)";
    for (int key = 0; key < 36; key++) {
        string decodedText = decode(s, key);
        cout << decodedText << endl;
    }
    return 0;
}
