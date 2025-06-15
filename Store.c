#include <stdio.h>
#include <string.h>

int main() {

    char Mo[20];
    int age;
    char choice;

    printf("What's your name: ");
    scanf("%s", Mo);

    printf("How old are you: ");
    scanf("%d", &age);

    printf("My age is: %d\n", age);

    printf("Which is your choice?\n");
    printf("a. Apple\nb. Amazon\nc. Netflix\n");
    scanf(" %c", &choice); // note space before %c

    printf("You choose Apple\n");
    printf("What do you want from Apple?\n");
    printf("a. Tablet\nb. iPhone\nc. Watch\n");
    scanf(" %c", &choice);
    printf("Your tax is $40\n");
    printf("The price of Tablet is $450\n");
    printf("The price of iPhone is $650\n");
    printf("The price of Watch is $350\n");

    printf("You choose Amazon\n");
    printf("What do you want from Amazon?\n");
    printf("a. T-shirt\nb. Shoes\nc. Shirt\n");
    scanf(" %c", &choice);
    printf("Your tax is $20\n");
    printf("The price of T-shirt is $15\n");
    printf("The price of Shoes is $35\n");
    printf("The price of Shirt is $45\n");

    printf("You choose Netflix\n");
    printf("What do you want from Netflix?\n");
    printf("a. Basic\nb. Standard\nc. Pro\n");
    scanf(" %c", &choice);
    printf("Your tax is $20\n");
    printf("The price of Basic is $15\n");
    printf("The price of Standard is $20\n");
    printf("The price of Pro is $30\n");

    printf("You choose one of them, the tax will be 40%%\n");
    printf("You choose all of the categories, the tax will be 90%%\n");

    printf("Your name is %s\n", Mo);
    printf("Your age is %d\n", age);
    printf("Your choice is %c\n", choice);
    printf("Your tax is 60%% if you choose all\n");
    printf("Welcome back again\n");

    return 0;
}
