
#include <string.h>
#include <stdio.h>
#include <math.h>
void testCase();
int sumDivisors(int n);
int isPrime(int n);
void deleteSpace(char s[]);
int ok = 0;
int main () {
    int t;
    scanf("%d", &t);
    // cout << strcmp("An", "Binh");
    scanf("\n");
    while (t--) {
        char s[100];
        gets(s);
        // printf("%s", s);
        
        int current = 0;
        int greater = 0, smaller = 0;
        // cout << s << endl;
        // printf("%s", s);
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == '>') {
                greater++;
            }
            if (s[i] == '<') {
                smaller++;
            }
        }
        char *token = strtok(s, "><");
        char res[101][101];
        while (token != NULL) {
            // cout << token << endl;
            strcpy(res[current++], token);
            token = strtok(NULL, "><");
        }
        for (int i = 0; i < current; i++) {
            // cout << res[i] << endl;
            deleteSpace(res[i]);
            // cout << res[i] << endl;
        }
        int compare = strcmp(res[0], res[1]);
        // cout << compare << endl;
        // cout << greater << " " << smaller << endl;
        if ((compare > 0 && smaller == 1) || (compare < 0 && greater == 1)) {
            // cout << "possible";
            ok = 1;
        } else {
            // cout << "impossible";
            ok = 0;
            break;
        }
    }
    if (ok == 1) {
        printf("possible");

    } else {
        printf("impossible");
    }
}
void testCase() {
    
}
void deleteSpace(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            for (int j = i; j < n; j++) {
                s[j] = s[j + 1];
            }
            n--;
            i--;
        }
    }
}