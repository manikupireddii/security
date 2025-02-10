#include <iostream>
using namespace std;

long long modExpo(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp) {
        if (exp % 2) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int modInverse(int e, int phi) {
    int x1 = 1, x0 = 0, phi0 = phi;
    while (e > 1) {
        int q = e / phi, t = phi;
        phi = e % phi; e = t;
        t = x0; x0 = x1 - q * x0; x1 = t;
    }
    return x1 + (x1 < 0 ? phi0 : 0);
}

int main() {
    int p = 61, q = 53;
    int n = p * q;
    int phi = (p - 1) * (q - 1);
    
    int e = 3;
    while (gcd(e, phi) != 1) e++; // Find a valid 'e'
    
    int d = modInverse(e, phi); // Compute 'd'

    int msg; 
    cout << "Enter number: "; 
    cin >> msg;

    long long cipher = modExpo(msg, e, n);
    cout << "Encrypted: " << cipher << "\n";
    cout << "Decrypted: " << modExpo(cipher, d, n) << endl;

    return 0;
}
