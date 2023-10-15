#include <stdio.h>
#include <string.h>
typedef struct word{
	char word[100];
	int dem;
} word;
int check(char s[]) {
	int length = strlen(s);
	for (int i = 0; i < length - 1; i++) {
		if (s[i] > s[i + 1]) {
			return 0;
		}
	}
	return 1;
}
int find(word a[], int current, char s[]) {
	for (int i = 0; i < current; i++) {
		if (strcmp(a[i].word, s) == 0) {
			return i;
		}
	}
	return -1;	
}
void sort(word a[], int current) {
	for (int i = 0; i < current; i++) {
		int max_index = i;
		for (int j = i + 1; j < current; j++) {
			if (a[j].dem > a[max_index].dem) {
				max_index = j;
			}
		}
		if (max_index != i) {
			word temp = a[i];
			a[i] = a[max_index];
			a[max_index] = temp;
		}
	}
}
int main () {
	word a[1001];
	char s[1001];
	int n = 0;
	while (scanf("%s", s) != -1) {
		if (check(s)) {
			int index = find(a, n, s);
			if (index == -1) {
				strcpy(a[n].word, s);
				a[n].dem = 1;
				n++;
			} else {
				a[index].dem++;
			}
		} 
	}
	sort(a, n);
	for (int i = 0; i < n; i++) {
		printf("%s %d\n", a[i].word, a[i].dem);
	}
}