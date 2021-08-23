//
// Created by kvitadmin on 23.08.2021.
//

#ifndef HOMEWORK21_5_3_MAIN_H
#define HOMEWORK21_5_3_MAIN_H

#include <iostream>
#include <cmath>

struct vec{
    float x;
    float y;
};

vec AddVec(vec& vec1, vec& vec2){
    vec vec3;
    vec3.x = vec1.x + vec2.x;
    vec3.y = vec1.y + vec2.y;
    return vec3;
}
vec SubVec(vec& vec1, vec& vec2){
    vec vec3;
    vec3.x = vec1.x - vec2.x;
    vec3.y = vec1.y - vec2.y;
    return vec3;
}

vec ScalVec(vec& vec1, float scal){
    vec vec2;
    vec2.x = vec1.x * scal;
    vec2.y = vec1.y * scal;
    return vec2;
}

double LengthVec(vec& vec1){
    return sqrt(static_cast<double>(vec1.x * vec1.x + vec1.y * vec1.y));
}

void NormalVec(vec& vec1){
    double length = sqrt(static_cast<double>(vec1.x * vec1.x + vec1.y * vec1.y));
    vec1.x = vec1.x / length;
    vec1.y = vec1.y / length;

}

#endif //HOMEWORK21_5_3_MAIN_H
