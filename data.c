#include <stdio.h>
#include <string.h>

void runLengthEncode(char *input) {
    int i, count;
    char current;

    int len = strlen(input);
    for (i = 0; i < len; i++) {
        current = input[i];
        count = 1;

        
        while (i + 1 < len && input[i] == input[i + 1]) {
            count++;
            i++;
        }

       
        printf("%c%d", current, count);
    }
    printf("\n");
}

int main() {
    char input[1000];

    printf("Enter the string to compress using RLE: ");
    fgets(input, sizeof(input), stdin);

    
    input[strcspn(input, "\n")] = '\0';

    printf("Compressed output: ");
    runLengthEncode(input);

    return 0;
}
