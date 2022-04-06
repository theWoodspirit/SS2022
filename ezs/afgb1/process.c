//
// Created by marku on 05.04.2022.
//

#include "process.h"
#include "stdio.h"
void p_switch_state(struct process *p){
    p->p_state == READY ? RUNNING : READY;
}

void p_print(struct process *p){
    if(p->p_state == READY){
        printf("PID: %u \nState: READY\n", p->p_id);
        return;
    }
    printf("PID: %u \nState: RUNNING\n", p->p_id);
}

