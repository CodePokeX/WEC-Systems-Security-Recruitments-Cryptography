#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

pair<int,int> primefactors(int n){
    int p,q;
    if(n % 2 == 0){
        p = 2;
        q = n / p;
        return make_pair(p,q);
    }
    else{
        for(int i = 3; i <= sqrt(n) + 1; i+= 2){
            if(n % i == 0){
                p = i;
                q = n / p;
                return make_pair(p,q);
            }
        }
    }
    return make_pair(1,n);
}

int eulertotient(int p, int q){
    return (p-1)*(q-1);
}

int privatekey(int e, int phi){
    int n = 0;
    while((phi*n + 1)%e != 0){
        n++;
    }
    return (phi*n + 1)/e;
}

long long decrypt(long long C, int d, int n){
    long long result = 1;
    while(d > 0){
        if(d % 2 == 1){
            result = (result * C)%n;
        }
        d = d / 2;
        C = (C * C)%n;
    }
    return result;
}

int main(){
    int n = 421649;
    int e = 17;

    int p = primefactors(n).first;
    int q = primefactors(n).second;

    int phi = eulertotient(p,q);

    int d = privatekey(e,phi);

    int encryptedmsg[] = {101945, 148510, 150222, 81384, 363199, 199550, 308279, 148634};

    int decryptedmsg[8];
    for(int i = 0; i < 8; i++){
        decryptedmsg[i] = decrypt(encryptedmsg[i], d, n);
    }
    for(int i: decryptedmsg){
        cout<<i<<" ";
    }
}