#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    int age;
    char email[50];
    char password[20];
    char categoryChoice;
    char productChoice;
    int quantity;
    float price = 0.0, subtotal = 0.0, taxRate = 0.15, tax, total;

    // User sign-in
    printf("Welcome to SmartCart!\n\n");
    printf("Please sign in below:\n");

    printf("Name: ");
    scanf("%s", name);

    printf("Age: ");
    scanf("%d", &age);

    printf("Email: ");
    scanf("%s", email);

    printf("Password: ");
    scanf("%s", password);

    printf("\n✅ Signed in successfully!\n\n");

    // Ask for category
    printf("What category would you like to shop from?\n");
    printf("a. Apple\nb. Amazon\nc. Netflix\n");
    printf("Enter your choice (a, b, c): ");
    scanf(" %c", &categoryChoice);

    // Handle category
    if (categoryChoice == 'a') {
        printf("\n🛒 Welcome to the Apple Store!\n");
        printf("Choose a product:\n");
        printf("a. Tablet ($450)\nb. iPhone ($650)\nc. Watch ($350)\n");
        scanf(" %c", &productChoice);

        if (productChoice == 'a') price = 450;
        else if (productChoice == 'b') price = 650;
        else if (productChoice == 'c') price = 350;
        else {
            printf("Invalid Apple product choice.\n");
            return 1;
        }

    } else if (categoryChoice == 'b') {
        printf("\n🛒 Welcome to the Amazon Store!\n");
        printf("Choose a product:\n");
        printf("a. T-shirt ($15)\nb. Shoes ($35)\nc. Shirt ($45)\n");
        scanf(" %c", &productChoice);

        if (productChoice == 'a') price = 15;
        else if (productChoice == 'b') price = 35;
        else if (productChoice == 'c') price = 45;
        else {
            printf("Invalid Amazon product choice.\n");
            return 1;
        }

    } else if (categoryChoice == 'c') {
        printf("\n🛒 Welcome to the Netflix Store!\n");
        printf("Choose a subscription:\n");
        printf("a. Basic ($15)\nb. Standard ($20)\nc. Pro ($30)\n");
        scanf(" %c", &productChoice);

        if (productChoice == 'a') price = 15;
        else if (productChoice == 'b') price = 20;
        else if (productChoice == 'c') price = 30;
        else {
            printf("Invalid Netflix subscription choice.\n");
            return 1;
        }

    } else {
        printf("Invalid category choice.\n");
        return 1;
    }

    // Ask for quantity
    printf("How many would you like to buy? ");
    scanf("%d", &quantity);

    // Calculate subtotal, tax, total
    subtotal = price * quantity;
    tax = subtotal * taxRate;
    total = subtotal + tax;

    // Receipt
    printf("\n🧾 Receipt:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Email: %s\n", email);
    printf("Category: %c\n", categoryChoice);
    printf("Product Price: $%.2f\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Tax (15%%): $%.2f\n", tax);
    printf("Total: $%.2f\n", total);
    printf("\nThank you for shopping with SmartCart!\n");

    return 0;
}
