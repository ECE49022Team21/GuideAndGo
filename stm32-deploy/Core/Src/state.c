#include "state.h"
#include "string.h"
#include "stdio.h"

char state[STATE_SIZE] = {'\0'};

int get_state(){
    int curr_state = state[0];
    return curr_state - '0';
}

int set_state(int new_state, int curr_landmark, int next_landmark, int final_landmark){
	int state_length;
    state_length = snprintf(state, STATE_SIZE, "%01d,%02d,%02d,%02d\n", new_state, curr_landmark, next_landmark, final_landmark);
    if(state_length != STATE_SIZE){
        return 0;
    }
    else{
        return 1;
    }
}

//"0,23,56,89"

int set_curr_landmark(int curr_landmark){
    int tens_place = curr_landmark / 10;
    int ones_place = curr_landmark % 10;
    state[2] = '0' + tens_place;
    state[3] = '0' + ones_place;
    return 1;
}