#ifndef _MAZE_H_
#define _MAZE_H_

class Maze {
    public:
        Maze(const char* const* _maze, const int _w, const int _h);
        bool isBlocked(const int _x, const int _y) const;
        //const char** getMaze() const;
        void printMaze() const;
    private:
        int width = 0;
        int height = 0;
        char** maze = nullptr;
};

#endif