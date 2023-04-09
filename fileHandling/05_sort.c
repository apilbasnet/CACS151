
#include <stdio.h>

int main() {
    FILE *oddFile, *evenFile; // File pointers for odd.txt and even.txt
    int num, i;

    // Open the files in write mode to store the numbers
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");

    if (oddFile == NULL || evenFile == NULL) {
        printf("Failed to open the files. Exiting...\n");
        return 1;
    }

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            // If number is even, write it to even.txt
            fprintf(evenFile, "%d\n", num);
        } else {
            // If number is odd, write it to odd.txt
            fprintf(oddFile, "%d\n", num);
        }
    }

    // Close the files after writing
    fclose(oddFile);
    fclose(evenFile);

    printf("Odd numbers stored in odd.txt\n");

    // Open the odd.txt file in read mode to display the odd numbers
    oddFile = fopen("odd.txt", "r");

    if (oddFile == NULL) {
        printf("Failed to open odd.txt file. Exiting...\n");
        return 1;
    }

    printf("Odd numbers: ");
    while (fscanf(oddFile, "%d", &num) != EOF) {
        printf("%d ", num);
    }
    printf("\n");

    // Close the file after reading
    fclose(oddFile);


    return 0;
}