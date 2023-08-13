#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char plaintext[], int n) {
    for (int i = 0; i < n; i++) {
        plaintext[i] = tolower(plaintext[i]);
    }
}

void encryptedMessage(int n, char plaintext[]) {
    toLowerCase(plaintext, n);
    
    for (int i = 0; i < n; i++) {
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z') {
            plaintext[i] = ((plaintext[i] - 'a') + 4) % 26 + 'a';
        }
    }
     
    printf("Encrypted message: %s\n", plaintext);
}

int main() {
    char encrypt[100];
    printf("Enter encrypt message: ");
    scanf("%s", encrypt);

    int n = strlen(encrypt);
    encryptedMessage(n, encrypt);

    return 0;
}
