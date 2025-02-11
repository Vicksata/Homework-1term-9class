#ifndef PROCESSES_H
#define PROCESSES_H

struct Process {
    int id;
    char name[30];
};

extern struct Process processes[5];
extern int processescount;

int createnewprocess(char* name_process);
int stopprocess(unsigned int idd);
void print_processes();

#endif
