#ifndef DARTS_H
#define DARTS_H
#include <math.h>
#include <stdint.h>

typedef struct {
    double x;
    double y;
} coordinate_t;

double _calc_distance(coordinate_t position);
double score(coordinate_t landing_position);

#endif
