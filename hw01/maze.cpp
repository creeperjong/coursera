#include <stdio.h>
#include "maze.h"

Maze::Maze(const char* const* _maze, const int _w, const int _h){
    width = _w, height = _h;
    maze = new char*[_h];
    for(int i = 0;i < _h;i++){
        maze[i] = new char[_w];
        for(int j = 0;j < _w;j++){
            maze[i][j] = _maze[i][j];
            if(maze[i][j] == 'O') maze[i][j] = '.';
        }
    }
}

inline bool Maze::isBlocked(const int _x, const int _y) const{
    if(_x >= 0 && _x < width && _y >= 0 && _y < height){
        if(maze[_x][_y] == '.') return true;
    }
    return false;
}

// inline Maze::getMaze(){
    
// }

inline void Maze::printMaze() const {
    for(int i = 0;i < height;i++) printf("%s\n", maze[i]);
}