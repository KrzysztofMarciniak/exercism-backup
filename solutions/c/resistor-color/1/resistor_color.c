#include "resistor_color.h"
#define SIZE_OF_RESISTOR_BAND_ENUM 10
resistor_band_t color_code(resistor_band_t input){
    return input;
}
const resistor_band_t* colors(void) {
    static resistor_band_t colors_array[SIZE_OF_RESISTOR_BAND_ENUM]; 
    for (int x = 0; x < SIZE_OF_RESISTOR_BAND_ENUM; x++) {
        colors_array[x] = (resistor_band_t)x; 
    }
    return colors_array;
}
