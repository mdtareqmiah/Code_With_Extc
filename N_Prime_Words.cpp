#include <bits/stdc++.h>
using namespace std;

// Check if a number is prime
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

// Get value of a character
int charValue(char c){
    if(c >= 'a' && c <= 'z') return c - 'a' + 1;
    if(c >= 'A' && c <= 'Z') return c - 'A' + 27;
    return 0;
}

int main(){
    string word;
    while(cin >> word){
        int sum = 0;
        for(char c : word) sum += charValue(c);

        if(isPrime(sum))
            cout << "It is a prime word." << endl;
        else
            cout << "It is not a prime word." << endl;
    }
    return 0;
}
