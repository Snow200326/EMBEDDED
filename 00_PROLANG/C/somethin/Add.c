// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("Enter the value for the additon :-\n");
//     scanf("%d",&n);
//     scanf("%d",&m);
//     printf("The addition of number %d + %d :- %d", n, m ,n+m);
//     printf("The Subtraction of number %d + %d :- %d", n, m ,n-m);
//     printf("The Multiplication of number %d + %d :- %d", n, m ,n*m);
//     printf("The Division of number %d + %d :- %d", n, m ,n/m);
// }
#include <stdio.h>
#include <conio.h>  // For getch() and getche() on Windows

int main() {
    char ch1, ch2;
    char str1[20];
    char str2[50];

    // // 1️⃣ getch() - reads 1 character, no echo
    // printf("Press a key (getch, not echoed): ");
    // ch1 = getch();  // user presses a key
    // printf("\nYou pressed (getch): %c\n", ch1);

    // // 2️⃣ getche() - reads 1 character, echoed
    // printf("Press a key (getche, echoed): ");
    // ch2 = getche(); // user presses a key
    printf("\nYou pressed (getche): %c\n", ch2);

    // 3️⃣ scanf("%s") - reads string until space
    printf("Enter a word (scanf): ");
    scanf("%s", str1); // stops at space
    printf("You entered (scanf): %s\n", str1);

    // 4️⃣ fgets() - reads full line including spaces
    getchar(); // consume leftover newline from previous input
    // printf("Enter a full line (fgets): ");
    // fgets(str2, sizeof(str2), stdin);  // reads up to 49 chars + '\0'
    // printf("You entered (fgets): %s\n", str2);

    return 0;
}
