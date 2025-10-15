#include "darts.h"
double _calc_distance(coordinate_t position) {
    return sqrt((position.x * position.x) + (position.y * position.y));
}
double score(coordinate_t landing_position) {
    double distance = _calc_distance(landing_position);
    if (distance <= 1.0)
        return 10;
    else if (distance <= 5.0)
        return 5;
    else if (distance <= 10.0)
        return 1;
    else
        return 0;
}