#include <stdio.h>
#include "processes.h"

void display_menu() {
    printf("------------MENU----------\n");
    printf("1. Create a process.\n");
    printf("2. Show current processes.\n");
    printf("3. Stop a process.\n");
    printf("4. Exit.\n");
    printf("\n");
}

int main() {
    display_menu();

    unsigned int act = 0;
    while (1) {
        printf("Enter action: ");
        scanf("%u", &act);

        if (act == 1) {
            char name[30];
            printf("Enter name of process: ");
            scanf("%s", name);
            createnewprocess(name);
        }
        else if (act == 2) {
            print_processes();
        }
        else if (act == 3) {
            unsigned int id;
            printf("Enter id of process: ");
            scanf("%u", &id);
            stopprocess(id);
        }
        else if (act == 4) {
            printf("Exiting...\n");
            break;
        }
        else printf("Invalid input!\n");
    }

    return 0;
}