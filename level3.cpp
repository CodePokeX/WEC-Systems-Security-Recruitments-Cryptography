#include<iostream>
using namespace std;

int main(){
    int encryptedmsg[] = {9135, 5700, 6382, 9648, 7286, 4198, 1686, 3054};
    string key = "Web.Club";
    string soln = "";
    int key_ascii[key.length()];
    for(int i = 0; i < key.length(); i++){
        key_ascii[i] = key.at(i);
    }
    char c = '\0';
    int n = 0;
    while(!(c >= 32 && c <= 126)){
        c = (10000*n + encryptedmsg[0])/key_ascii[0];
        n++;
    }
    soln += c;
    for(int i = 1; i < key.length(); i++){
        c = '\0';
        n = 0;
        while(!(c >= 32 && c <= 126)){
            c = (10000*n + encryptedmsg[i] - encryptedmsg[i-1])/key_ascii[i];
            n++;
        }
        soln += c;
    }
    cout<<soln<<endl;
}