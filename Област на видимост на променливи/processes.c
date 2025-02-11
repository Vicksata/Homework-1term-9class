#include "processes.h"
#include <string.h>
#include <stdio.h>

struct Process processes[5];
int processescount = 0;

static int nextprocessid() {
    static unsigned int id = 0;
    return ++id;
}

int createnewprocess(char* name_process) {
    if (processescount >= 5) {
        printf("Maximum number of processes reached.\n");
        return 0;
    }

    int idd = nextprocessid();
    if (idd == 0) {
        printf("No available IDs.\n");
        return 0;
    }

    processes[processescount].id = idd;
    strncpy(processes[processescount].name, name_process, sizeof(processes[processescount].name) - 1);
    processes[processescount].name[sizeof(processes[processescount].name) - 1] = '\0';

    processescount++;
    return idd;
}

void print_processes() {
    for (int i = 0; i < processescount; i++) {
        printf("Process id: %d\n", processes[i].id);
        printf("Process name: %s\n", processes[i].name);
        printf("\n");
    }
}

int stopprocess(unsigned int idd) {
    int index = -1;
    for (int i = 0; i < processescount; i++) {
        if (processes[i].id == idd) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Process with ID %d not found.\n", idd);
        return 0;
    }

    for (int i = index; i < processescount - 1; i++) {
        processes[i] = processes[i + 1];
    }

    processescount--;

    processes[processescount].id = 0;
    processes[processescount].name[0] = '\0';

    printf("Process with ID %d has been stopped.\n", idd);
    return 1;
}
