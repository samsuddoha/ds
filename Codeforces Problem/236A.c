#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int freq[26] = {0};
    int distinct = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[s[i] - 'a'] == 0) {
            freq[s[i] - 'a'] = 1;
            distinct++;
        }
    }

    if (distinct % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}
