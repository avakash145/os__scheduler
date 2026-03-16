#ifndef PROCESS_H
#define PROCESS_H

typedef struct {
    int pid;
    int burst_time;
    int waiting_time;
    int turnaround_time;
} Process;

#endif