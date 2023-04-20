#ifndef __STATE_H__
#define __STATE_H__

#define BOOT 9
#define IDLE 0
#define READ 1
#define PROCESS 2
#define PROMPT 3
#define RETRY 4
#define NAVIGATE 5
#define CAMERA 6
#define ARRIVED 7
#define STATE_SIZE 12

extern char state[STATE_SIZE];

int get_state();
int set_state(int state, int curr_landmark, int next_landmark, int final_landmark);
void send_state();
char* recv_state();

#endif
