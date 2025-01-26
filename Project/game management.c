#include <stdio.h>
#include <string.h>

// Structure to store game details
typedef struct {
    char name[50];
    float price;
    char genre[50];
} Game;

// Function prototypes
void showMenu();
void displayGames(Game games[], int size);
void handlePurchase(Game games[], int size);
void showGameDetails(Game selectedGame);
void handleWishlist();
void handleComplain();
void purchaseFailed();

int main() {
    // Array of 20 games
    Game games[] = {
        {"The Witcher 3: Wild Hunt", 39.99, "Action RPG"},
        {"Half-Life 2", 9.99, "FPS, Action-adventure"},
        {"Red Dead Redemption 2", 59.99, "Action-adventure, Open world"},
        {"The Elder Scrolls V: Skyrim", 39.99, "Action RPG"},
        {"Minecraft", 26.95, "Sandbox, Survival"},
        {"Sid Meier�s Civilization VI", 59.99, "Turn-based Strategy"},
        {"Portal 2", 9.99, "Puzzle-platformer"},
        {"DOOM Eternal", 59.99, "FPS"},
        {"BioShock Infinite", 19.99, "FPS"},
        {"Dark Souls III", 59.99, "Action RPG"},
        {"Overwatch", 39.99, "First-person shooter, Team-based"},
        {"Grand Theft Auto V", 29.99, "Action-adventure, Open world"},
        {"Counter-Strike: Global Offensive", 0.0, "Tactical FPS"},
        {"Hades", 24.99, "Roguelike"},
        {"World of Warcraft", 14.99, "MMORPG (Subscription-based)"},
        {"League of Legends", 0.0, "Multiplayer Online Battle Arena (MOBA)"},
        {"The Legend of Heroes: Trails in the Sky", 19.99, "JRPG"},
        {"The Sims 4", 39.99, "Life simulation"},
        {"Cyberpunk 2077", 59.99, "Action RPG"},
        {"Diablo III", 39.99, "Action RPG"}
    };
    int numGames = sizeof(games) / sizeof(games[0]);

    int choice;

    // Main menu loop
    do {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayGames(games, numGames);
                handlePurchase(games, numGames);
                break;
            case 2:
                handleWishlist();
                break;
            case 3:
                handleComplain();
                break;
            case 4:
                printf("Thank you for visiting. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to display the main menu
void showMenu() {
    printf("\n=== Game Selling Online Shop ===\n");
    printf("1. List of Available Games\n");
    printf("2. Add to Wishlist\n");
    printf("3. Complain Box\n");
    printf("4. Exit\n");
}

// Function to display available games (names only)
void displayGames(Game games[], int size) {
    printf("\n=== Available Games ===\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s\n", i + 1, games[i].name);
    }
}

// Function to show details of the selected game
void showGameDetails(Game selectedGame) {
    printf("\n--- Game Details ---\n");
    printf("Name: %s\n", selectedGame.name);
    printf("Price: $%.2f\n", selectedGame.price);
    printf("Genre: %s\n", selectedGame.genre);
}

// Function to handle purchase
void handlePurchase(Game games[], int size) {
    int gameChoice;
    char accountNumber[25];

    printf("\nEnter the number of the game you want to purchase: ");
    scanf("%d", &gameChoice);

    if (gameChoice < 1 || gameChoice > size) {
        printf("Invalid choice. ");
        purchaseFailed();
        return;
    }

    // Show the details of the selected game
    showGameDetails(games[gameChoice - 1]);

    // Payment options
    printf("\nSelect payment method:\n1. Card\n2. Bkash\n3. Nagad\n4. Rocket\n");
    int paymentMethod;
    scanf("%d", &paymentMethod);

    if (paymentMethod < 1 || paymentMethod > 4) {
        printf("Invalid payment method. ");
        purchaseFailed();
        return;
    }

    // Account number input
    printf("Enter your account number (max 25 characters): ");
    scanf("%s", accountNumber);

    printf("\nPurchase successful! Welcome to the world of %s!\n", games[gameChoice - 1].name);
}

// Function to handle wishlist
void handleWishlist() {
    char wishlistGame[50];
    FILE *file = fopen("wishlist.txt", "a");

    if (!file) {
        printf("Failed to access wishlist.\n");
        return;
    }

    printf("\nEnter the name of the game you want to add to the wishlist: ");
    scanf(" %[^\n]", wishlistGame);

    fprintf(file, "%s\n", wishlistGame);
    fclose(file);

    printf("\nThe game \"%s\" has been added to your wishlist.\n", wishlistGame);
}

// Function to handle complaints
void handleComplain() {
    char complaint[100];
    printf("\nEnter your complaint: ");
    scanf(" %[^\n]", complaint);

    printf("\nYour complaint has been recorded. Thank you for your feedback!\n");
}

// Function for purchase failure
void purchaseFailed() {
    printf("\nPurchase failed. Please try again.\n");
}
