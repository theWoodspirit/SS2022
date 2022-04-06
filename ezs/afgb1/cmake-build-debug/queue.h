//
// Created by marku on 05.04.2022.
//

#ifndef AFGB1_QUEUE_H
#define AFGB1_QUEUE_H
struct q_node{
    struct q_node *next;
    struct process *p;
};
struct queue{
    struct q_node *start;
    struct q_node *end;
};
void q_add(struct queue *q, struct process *p);

struct process *q_remove(struct queue *q);
void q_print(struct queue *q);
#endif //AFGB1_QUEUE_H
