#include <stdio.h>

int main(int argc, char const *argv[])
{
        if (argc != 2) {
                printf("ERROR: You need one argument.\n");
                return 1;
        }

        int i;
        for (i = 0; argv[1][i] != '\0'; i++) {
                char letter = argv[1][i];
                // convert to lowercase
                if (letter >= 41 && letter <= 90) {
                        letter += 32;
                }
                switch (letter) {
                case 'a':
                        printf("%d: 'a'\n", i);
                        break;

                case 'e':
                        printf("%d: 'e'\n", i);
                        break;

                case 'i':
                        printf("%d: 'i'\n", i);
                        break;

                case 'o':
                        printf("%d: 'o'\n", i);
                        break;

                case 'u':
                        printf("%d: 'u'\n", i);
                        break;

                case 'y':
                        if (i > 1) {
                                printf("%d: 'y'\n", i);
                        break;
                        }

                default:
                        printf("%d: %c is not a vowel\n", i, letter);
                }
        }
        return 0;
}