#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char st1[100], st2[100];
    scanf("%s %s", st1, st2);

    for (int i = 0; st1[i]; i++) {
        st1[i] = tolower(st1[i]);
    }
    for (int i = 0; st2[i]; i++) {
        st2[i] = tolower(st2[i]);
    }

    int result = strcmp(st1, st2);
    printf("%d", result);

    return 0;
}
