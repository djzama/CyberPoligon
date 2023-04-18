#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int print_heart(){
    printf(" _____  _   _  ___  ____    ___  ____        _  ____    ___   _   _  ____   \n");
    printf("|_   _|| | | ||_ _|/ ___|  |_ _|/ ___|      | |/ ___|  / _\\ |\\ | |/ ___|  \n");
    printf("  | |  | |_| | | |\\___\\   | |\\___\\   _  | \\___\\ | | | || \\| |\\___\\  \n");
    printf("  | |  |  _  | | |  ___) |  | |  ___) | | |_| | ___) || |_| || |\\  | ___) | \n");
    printf("  |_|  |_| |_||___||____/  |___||____/  \\___/ |____/ \\___/ |_| \\_||____/  \n");
    printf("");
    printf(" _   _  _____     _     ____  _____     \n");
    printf("| | | || ____|   /\\   |  _\\|_   _|    \n");
    printf("| |_| ||  _|    / _\\  | |_) | | |      \n");
    printf("|  _  || |___  / ___\\ |  _ <  | |      \n");
    printf("|_| |_||_____|/_/  \\_\\|_|\\_\\ |_|      \n");
    printf("                  _____                 \n");
    printf("              _.-'     `'-._            \n");
    printf("            .'             '.           \n");
    printf("           /                \\          \n");
    printf("          /                  \\         \n");
    printf("         |       _____         |        \n");
    printf("         |      /    \\        |        \n");
    printf("         |     |   O   |       |        \n");
    printf("         |     \\     /        |        \n");
    printf("         |      \\___/         |        \n");
    printf("         \\                    \\       \n");
    printf("          \\                    \\      \n");
    printf("            '.                   .'     \n");
    printf("              '-._           _.-'       \n");
    printf("                  `'-._   _.-'          \n");
    printf("                       `-'              \n");      
    return 0;
}

void flag() {
    printf("this is flag\n");
}

void authenticate() {
    char password[16];
    print_heart();
    printf("Enter the password: ");
    scanf("%s", password);
    if (strcmp(password, "letmein") == 0) {
        printf("Authentication successful!\n");
    } else {
        printf("Incorrect password.\n");
    }
}

int main() {
    char buffer[24];
    memset(buffer, 'A', 24);
    *((void**) (buffer + 16)) = &flag;
    authenticate();
    return 0;
}