#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int print_plant(){
    
    printf("⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⠀⣠⣤⠀  \n");
    printf("⠙⠿⠿⠿⢛⣽⣿⣿⣿⢿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣝⡛⠛⢋⣠⣴⠿⠿⠀  \n");
    printf("⠻⠿⢿⣿⣿⣿⡻⣿⣿⣦⣈⠉⠉⣁⣴⣿⣿⣟⠻⢿⣿⣿⣿⣿⠿⠋⢠⣾⠀  \n");
    printf("  ⢸⣿⣿⣿⣿⣦⣬⣉⣠⣴⣾⣿⣿⣿⣿⣿⣷⣤⣤⡤⠀⣤⣶⣾⣿⣿⠀  \n");
    printf("  ⠈⠉⣉⣉⣉⣀⣀⣀⣀⣀⣀⣉⣉⣉⡉⠙⠛⠿⠛⢁⣼⣿⣟⠻⠿⠟⠀  \n");
    printf("    ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠒⠒⠚⠛⠛⠛⠛⠿⠶⠶⠀ \n");
    printf("     ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢠⣾⣿⣿⣿⣿⣿⣶⣶⠀⠀⠀ \n");
    printf("     ⣿⣿⠋⠀⢻⣿⣿⣿⠋⠈⠻⣿⡇⢸⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀ \n");
    printf("    ⢀⣿⠃⠀⠀⢀⣿⣿⣇⠀⠀⠀⢹⣇⠈⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀ \n");
    printf("    ⢸⣿⣶⣶⣶⣿⣇⣀⣿⣷⣶⣶⣾⣿⠀⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀ \n");
    printf("    ⣼⣿⣿⣿⣿⡿⠋⠉⠻⣿⣿⣿⣿⣿⡄⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀ \n");
    printf("    ⣿⣿⣿⣿⣿⣁⡀⠀⢀⣹⣿⣿⣿⣿⡇⢸⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀ \n");
    printf("   ⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⢿⣿⣿⣿⣿⣿⣿⣿⡄⠀ \n");
    printf("  ⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠘⠛⠛⠛⠛⠋⠉⠉⠁⠀ \n");
    printf("    ⠉⠉⠉⠛⠛⠛⠛⠛⠛⠛⠛⠋⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n");
    return 0;
}

void print_flag(){
    printf("this is a flag");
}

int main(){
    char input[8];
    char another[16];
    char flag[8] = {102, 108, 97, 103};

    print_plant();

    printf("*Comrade aсceтt*");
    printf("This is your motherchip.\nThis is our pride.\n");
    printf("The second reactor of the great city of Pripyat...\n");
    printf("Now comrade, what are you doing to find out about him?\nSay it to my face: ");
    fgets(input, sizeof(input), stdin);
    if(strcmp(input, flag) == 0){
        printf("Sorry, comrade, there are no flags in reactor.\n");
        printf("Maybe you need to find another one? Like:....");
        gets(another);
    }

    return 0;
}
