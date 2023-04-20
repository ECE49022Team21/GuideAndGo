#include "alias.h"
#include "landmarks.h"
#include "string.h"

int get_landmark_index(char* input){
    int l, a;
    int num_aliases;
    char* alias;
    landmark_t landmark;
    for(l = 0; l < LEN_LANDMARKS; l++){
        landmark = landmarks[l];
        num_aliases = landmark.num_aliases;
        for(a = 0; a < num_aliases; a++){
            alias = landmark.aliases[a];
            if(strcasestr(input, alias) != NULL){
                return l;
            }
        }
    }

    return -1;
}