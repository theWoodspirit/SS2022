//
// Created by marku on 05.04.2022.
//

#ifndef AFGB1_PROCESS_H
#define AFGB1_PROCESS_H
#include <stdint-gcc.h>



typedef enum
{
    // enumerator-list
    READY,
    RUNNING
}state;

struct process {
    uint32_t p_id;
    state p_state;
};

void p_switch_state(struct process *p);
void p_print(struct process *p);
#endif //AFGB1_PROCESS_H
