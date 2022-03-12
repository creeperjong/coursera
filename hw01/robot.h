#ifndef _ROBOT_H_
#define _ROBOT_H_

enum Direction {
    UP = 0, RIGHT = 1, DOWN = 2, LEFT = 3
};

class Robot {
    public:
        Robot(int _x, int _y);
        int getPosition_X() const;
        int getPosition_Y() const;
        Direction getDirection() const;
        void moveForward();
        void turnRight();
    private:
        int x = 0;
        int y = 0;
        Direction dir = UP;
};

#endif