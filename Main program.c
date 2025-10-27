#include<stdio.h>
int main()
#include <stdio.h>
#include <string.h>

int main() {
    char choice[100];
    printf("Welcome to our cafe. Now, what are we craving at?\n");
    printf("1. Starters/Snacks\n");
    printf("2. Main Course - Indian Famous\n");
    printf("3. Main Course - Punjabi Tadka\n");
    printf("4. Main Course - South Special\n");
    printf("5. Main Course - Chinese/Japanese Taste\n");
    printf("....\n");

    printf("Enter your choice: ");
    fgets(choice, sizeof(choice), stdin);
    choice[strcspn(choice, "\n")] = 0; 

    printf("You selected: %s\n", choice);
    return 0;
}
