#ifndef MAP_H
#define MAP_H

#define MAP_WIDTH 640
#define MAP_HEIGHT 480
class Map {
    private:
        static unsigned int level = 0;
    public:
        Map(unsigned int width, unsigned int height);
        ~Map();
}

#endif
