#include "robot.h"

Robot::Robot(int _x, int _y){
    x = _x, y = _y, dir = UP;
}

inline int Robot::getPosition_X() const{
    return x;
}

inline int Robot::getPosition_Y() const{
    return y;
}

inline Direction Robot::getDirection() const{
    return dir;
}

inline void Robot::moveForward(){
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};
    x  = x + dx[dir], y = y + dy[dir];
}

inline void Robot::turnRight(){
    switch (dir){
        case UP:
            dir = RIGHT;
            break;
        case RIGHT:
            dir = DOWN;
            break;
        case DOWN:
            dir = LEFT;
            break;
        case LEFT:
            dir = UP;
            break;
    }
}