#ifndef SNAKE_H
#define SNAKE_H

#define SNAKE_MAX_LEN 256

struct SnakePart {
    int x, y;
};

struct Snake {
    int length;
    struct SnakePart part[SNAKE_MAX_LEN];
};

extern struct Snake snake;

void draw_snake();
void move_snake(int dx, int dy);

#endif
