#include <stdio.h>
#include <stdlib.h>

void print_nuclear(){
    printf("         ,--.!,  "); 
    printf("       __/   -*- ");
    printf("     ,d08b.  '|` ");
    printf("     0088MM      ");
    printf("     `9MMP'      ");    
}

void print_system(){
    printf("System undefined...Sorry");
    printf("Linux kernel 3.26.2");
}

void print_flag(){
    printf("this is flag");
}

void admin_menu(){
    char choice;

    printf("You can choose one of this:");
    printf("  1. Leave");
    printf("  2. Bring flag");
    printf("  3. Check system");
    printf("Enter your choice: ");
    gets(choice);
    switch(choice){
        case 1:
            break;
        case 0x222222:
            print_flag();
        case 3:
            print_system();
    }
}

void login(char *user){
    char login[] ={97, 100, 109, 105, 110};

    if (user == login){
        printf("Authentication was successful");
        admin_menu();
    }
    else{
        printf("Authentication failerd");
    }
}

int main(){
    char buf[5];

    print_nuclear();

    printf("Enter your login: %s", buf);
    gets(buf);
    login(buf);
    return 0;
}