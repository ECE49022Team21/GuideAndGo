#include "alias.h"
#include "landmarks.h"
#include "stdio.h"

const char* _landmark_aliases_0[3]  = {"elliott hall of music", "elliot", "music"};
const char* _landmark_aliases_1[2]  = {"physics building", "physic"};
const char* _landmark_aliases_2[3]  = {"hovde hall of administration", "hovde", "admin"};
const char* _landmark_aliases_3[2]  = {"brown laboratory of chemistry", "brown"};
const char* _landmark_aliases_4[4]  = {"neil armstrong hall of engineering", "neil", "armstrong", "strong"};

const char* _landmark_aliases_5[3]  = {"heine pharmacy", "heine", "pharmacy"};
const char* _landmark_aliases_6[3]  = {"union club hotel", "club", "hotel"};
const char* _landmark_aliases_7[2]  = {"stewart center", "stew"};
const char* _landmark_aliases_8[2]  = {"heavilon hall", "heavilon"};
const char* _landmark_aliases_9[2]  = {"student health center", "health"};

const char* _landmark_aliases_10[2] = {"knoy hall", "knoy"};
const char* _landmark_aliases_11[3] = {"johnson hall of nursing", "johnson", "nurs"};
const char* _landmark_aliases_12[2] = {"r. b. wetherill laboratory of chemistry", "wetherill"};
const char* _landmark_aliases_13[2] = {"purdue student union", "purdue"};
const char* _landmark_aliases_14[2] = {"data science", "data"};

const char* _landmark_aliases_15[2] = {"grissom hall", "grissom"};
const char* _landmark_aliases_16[3] = {"hampton hall of civil engineering", "hampton", "civil"};
const char* _landmark_aliases_17[3] = {"forney hall of chemical engineering", "forney", "chemical"};
const char* _landmark_aliases_18[2] = {"schleman hall", "schleman"};
const char* _landmark_aliases_19[3] = {"haas hall", "haas", "has"};

const char* _landmark_aliases_20[2] = {"potter engineering center", "potter"};
const char* _landmark_aliases_21[1] = {"armory"};
const char* _landmark_aliases_22[3] = {"matthews hall", "matthew", "mathew"};
const char* _landmark_aliases_23[2] = {"psychological sciences building", "psych"};
const char* _landmark_aliases_24[2] = {"beering hall", "beer"};

const char* _landmark_aliases_25[2] = {"mathematical sciences building", "math"};
const char* _landmark_aliases_26[2] = {"stone hall", "stone"};
const char* _landmark_aliases_27[3] = {"materials science and electrical engineering", "material", "msee"};
const char* _landmark_aliases_28[2] = {"electrical engineering", "ee"};
const char* _landmark_aliases_29[3] = {"mechanical engineering", "mechanical", "me"};

const char* _landmark_aliases_30[2] = {"university hall", "UH"};
const char* _landmark_aliases_31[4] = {"northwestern parking garage", "northwestern", "parking", "garage"};
const char* _landmark_aliases_32[2] = {"university lutheran church", "church"};
const char* _landmark_aliases_33[2] = {"wang hall", "wang"};
const char* _landmark_aliases_34[4] = {"class of 1950 lecture hall", "1950", "nineteen", "fifty"};

const char* _landmark_aliases_35[2] = {"pierce hall", "pierce"};
const char* _landmark_aliases_36[4] = {"wilmeth active learning center", "wilmeth", "active", "walk"};
const char* _landmark_aliases_37[3] = {"engineering and polytechnic gateway", "polytechnic", "gateway"};
const char* _landmark_aliases_38[3] = {"chaney hale hall of science", "chaney", "hale"};
const char* _landmark_aliases_39[3] = {"stanley coulter hall", "stan", "coulter"};

alias_l aliases[] = {
[0]  = {.num_aliases = 3, .aliases = _landmark_aliases_0},
[1]  = {.num_aliases = 2, .aliases = _landmark_aliases_1},
[2]  = {.num_aliases = 3, .aliases = _landmark_aliases_2},
[3]  = {.num_aliases = 2, .aliases = _landmark_aliases_3},
[4]  = {.num_aliases = 4, .aliases = _landmark_aliases_4},

[5]  = {.num_aliases = 3, .aliases = _landmark_aliases_5},
[6]  = {.num_aliases = 3, .aliases = _landmark_aliases_6},
[7]  = {.num_aliases = 2, .aliases = _landmark_aliases_7},
[8]  = {.num_aliases = 2, .aliases = _landmark_aliases_8},
[9]  = {.num_aliases = 2, .aliases = _landmark_aliases_9},

[10] = {.num_aliases = 2, .aliases = _landmark_aliases_10},
[11] = {.num_aliases = 3, .aliases = _landmark_aliases_11},
[12] = {.num_aliases = 2, .aliases = _landmark_aliases_12},
[13] = {.num_aliases = 2, .aliases = _landmark_aliases_13},
[14] = {.num_aliases = 2, .aliases = _landmark_aliases_14},

[15] = {.num_aliases = 2, .aliases = _landmark_aliases_15},
[16] = {.num_aliases = 3, .aliases = _landmark_aliases_16},
[17] = {.num_aliases = 2, .aliases = _landmark_aliases_17},
[18] = {.num_aliases = 3, .aliases = _landmark_aliases_18},
[19] = {.num_aliases = 3, .aliases = _landmark_aliases_19},

[20] = {.num_aliases = 2, .aliases = _landmark_aliases_20},
[21] = {.num_aliases = 1, .aliases = _landmark_aliases_21},
[22] = {.num_aliases = 3, .aliases = _landmark_aliases_22},
[23] = {.num_aliases = 2, .aliases = _landmark_aliases_23},
[24] = {.num_aliases = 2, .aliases = _landmark_aliases_24},

[25] = {.num_aliases = 2, .aliases = _landmark_aliases_25},
[26] = {.num_aliases = 2, .aliases = _landmark_aliases_26},
[27] = {.num_aliases = 3, .aliases = _landmark_aliases_27},
[28] = {.num_aliases = 2, .aliases = _landmark_aliases_28},
[29] = {.num_aliases = 3, .aliases = _landmark_aliases_29},

[30] = {.num_aliases = 2, .aliases = _landmark_aliases_30},
[31] = {.num_aliases = 4, .aliases = _landmark_aliases_31},
[32] = {.num_aliases = 2, .aliases = _landmark_aliases_32},
[33] = {.num_aliases = 2, .aliases = _landmark_aliases_33},
[34] = {.num_aliases = 4, .aliases = _landmark_aliases_34},

[35] = {.num_aliases = 2, .aliases = _landmark_aliases_35},
[36] = {.num_aliases = 4, .aliases = _landmark_aliases_36},
[37] = {.num_aliases = 3, .aliases = _landmark_aliases_37},
[38] = {.num_aliases = 3, .aliases = _landmark_aliases_38},
[39] = {.num_aliases = 3, .aliases = _landmark_aliases_39},
};


int get_landmark_index(char* input){
    int l, a;
    int num_aliases;
    char* alias;
    alias_l landmark_aliases;
    for(l = 0; l < LEN_LANDMARKS; l++){
    	landmark_aliases = aliases[l];
        num_aliases = landmark_aliases.num_aliases;
        for(a = 0; a < num_aliases; a++){
            alias = landmark_aliases.aliases[a];
            if(strcasestr(input, alias) != NULL){
                return l;
            }
        }
    }

    return -1;
}

