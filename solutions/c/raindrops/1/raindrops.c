#include "raindrops.h"
_Bool is_div(int input, int number);
_Bool is_pling(int input);
_Bool is_plang(int input);
_Bool is_plong(int input);
_Bool is_div(int input, int number) {
    return (input % number == 0);
}
_Bool is_pling(int drp){
    return (is_div(drp, 3));
}
_Bool is_plang(int drp){
    return (is_div(drp, 5));
}
_Bool is_plong(int drp){
    return (is_div(drp, 7));
}
void convert(char result[], int drops) {
    char sounds[17] = "";      
    int did_we_divide = 0;
    if (is_pling(drops)) {
        strcat(sounds, "Pling");
        did_we_divide++;
    }
    if (is_plang(drops)) {
        strcat(sounds, "Plang");
        did_we_divide++;
    }
    if (is_plong(drops)) {
        strcat(sounds, "Plong");
        did_we_divide++;
    }
    if (did_we_divide) {
        strcpy(result, sounds); 
    } else {
        sprintf(result, "%d", drops);
    }
}