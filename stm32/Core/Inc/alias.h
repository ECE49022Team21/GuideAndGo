#ifndef __ALIAS_H__
#define __ALIAS_H__

int get_landmark_index(char* alias);

typedef struct _alias_l{
    int num_aliases;
	char** aliases;
} alias_l;

alias_l aliases[] = {
[0]  = {.num_aliases = 1, .aliases = ["elliott hall of music"], },
[1]  = {.num_aliases = 1, .aliases = ["physics building"]},
[2]  = {.num_aliases = 1, .aliases = ["hovde hall of administration"]},
[3]  = {.num_aliases = 1, .aliases = ["brown laboratory of chemistry"]},
[4]  = {.num_aliases = 1, .aliases = ["neil armstrong hall of engineering"]},
[5]  = {.num_aliases = 1, .aliases = ["heine pharmacy"]},
[6]  = {.num_aliases = 1, .aliases = ["union club hotel"]},
[7]  = {.num_aliases = 1, .aliases = ["stewart center"]},
[8]  = {.num_aliases = 1, .aliases = ["heavilon hall"]},
[9]  = {.num_aliases = 1, .aliases = ["student health center"]},
[10] = {.num_aliases = 1, .aliases = ["knoy hall"]},
[11] = {.num_aliases = 1, .aliases = ["johnson hall of nursing"]},
[12] = {.num_aliases = 1, .aliases = ["r. b. wetherill laboratory of chemistry"]},
[13] = {.num_aliases = 1, .aliases = ["purdue student union"]},
[14] = {.num_aliases = 1, .aliases = ["data science"]},
[15] = {.num_aliases = 1, .aliases = ["grissom hall"]},
[16] = {.num_aliases = 1, .aliases = ["hampton hall of civil engineering"]},
[17] = {.num_aliases = 1, .aliases = ["forney hall of chemical engineering"]},
[18] = {.num_aliases = 1, .aliases = ["schleman hall"]},
[19] = {.num_aliases = 1, .aliases = ["haas  hall"]},
[20] = {.num_aliases = 1, .aliases = ["potter engineering center"]},
[21] = {.num_aliases = 1, .aliases = ["armory"]},
[22] = {.num_aliases = 1, .aliases = ["matthews hall"]},
[23] = {.num_aliases = 1, .aliases = ["psychological sciences building"]},
[24] = {.num_aliases = 1, .aliases = ["beering hall"]},
[25] = {.num_aliases = 1, .aliases = ["mathematical sciences building"]},
[26] = {.num_aliases = 1, .aliases = ["stone hall"]},
[27] = {.num_aliases = 1, .aliases = ["materials science and electrical engineering"]},
[28] = {.num_aliases = 1, .aliases = ["electrical engineering"]},
[29] = {.num_aliases = 1, .aliases = ["mechanical engineering"]},
[30] = {.num_aliases = 1, .aliases = ["university hall"]},
[31] = {.num_aliases = 1, .aliases = ["northwestern parking garage"]},
[32] = {.num_aliases = 1, .aliases = ["university lutheran church"]},
[33] = {.num_aliases = 1, .aliases = ["wang hall"]},
[34] = {.num_aliases = 1, .aliases = ["class of 1950 lecture hall"]},
[35] = {.num_aliases = 1, .aliases = ["pierce hall"]},
[36] = {.num_aliases = 1, .aliases = ["wilmeth active learning center"]},
[37] = {.num_aliases = 1, .aliases = ["engineering and polytechnic gateway"]},
[38] = {.num_aliases = 1, .aliases = ["chaney hale hall of science"]},
[39] = {.num_aliases = 1, .aliases = ["stanley coulter hall"]},
};

#endif