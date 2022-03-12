#include <stdio.h>
#include "maze.h"
#include "robot.h"

int main(){
    int w = 0, h = 0, n = 0, rx = 0, ry = 0;
    char** mazeInput = nullptr;
    scanf("%d %d %d", &w, &h, &n);
    mazeInput = new char*[h];
    for(int i = 0;i < h;i++){
        mazeInput[i] = new char[w];
        scanf("%s", mazeInput[i]);
        for(int j = 0;j < w;j++){
            if(mazeInput[i][j] == 'O') rx = j, ry = i;
        }
    }
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};
    Maze maze(mazeInput, w, h);
    Robot robot(rx, ry);
    while(n--){
        int nx = robot.getPosition_X() + dx[robot.getDirection()];
        int ny = robot.getPosition_Y() + dy[robot.getDirection()];
        int turnCnt = 0;
        while(maze.isBlocked(nx, ny) && turnCnt < 4) robot.turnRight();
        if(turnCnt == 4){
            printf("Error: Robot has no way to move!\n");
            return 0;
        }
        robot.moveForward();
    }
    printf("%d %d\n", robot.getPosition_X(), robot.getPosition_Y());
    return 0;
}