#include "space_age.h"
#define VALUE_MERCURY  0.2408467
#define VALUE_VENUS    0.61519726
#define VALUE_EARTH    1.0
#define VALUE_MARS     1.8808158
#define VALUE_JUPITER  11.862615
#define VALUE_SATURN   29.447498
#define VALUE_URANUS   84.016846
#define VALUE_NEPTUNE  164.79132

float planet_to_value(planet_t planet);
float seconds_to_years(int64_t sec);

float planet_to_value(planet_t planet) {
    switch (planet) {
        case MERCURY: return VALUE_MERCURY;
        case VENUS:   return VALUE_VENUS;
        case EARTH:   return VALUE_EARTH;
        case MARS:    return VALUE_MARS;
        case JUPITER: return VALUE_JUPITER;
        case SATURN:  return VALUE_SATURN;
        case URANUS:  return VALUE_URANUS;
        case NEPTUNE: return VALUE_NEPTUNE;
        default:
            return -1;
    }
}

float seconds_to_years(int64_t sec){
    return sec / (60 * 60 * 24 * 365.25);
}
float age(planet_t planet, int64_t seconds){
    if (seconds < 0) return -1;               
    if (planet < MERCURY || planet > NEPTUNE) return -1;
    return seconds_to_years(seconds) / planet_to_value(planet);
}
