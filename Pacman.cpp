#include "PacMan.h"
#include <curses.h>
Pacman::Pacman(int startX, int startY, Map& gameMap)
    : Character(startX, startY), dx(0), dy(0),Cell(0), map(gameMap), vidas(3) {}

bool Pacman::canMove(int dx, int dy) {
    char cell = map.getCell(x + dx, y + dy);
    return cell != '#';
}

void Pacman::movePacman() {
    int newX = x + dx;
    int newY = y + dy;
    if (canMove(dx, dy)) {
        x = newX;
        y = newY;
        if (map.getCell(x, y) == '.') {
            Cell++;
            map.setCell(x, y, ' ');
        }
    }
}          

int Pacman::getCell() const{
    return Cell;
}

void Pacman::handleInput(int input) {
    if (input == KEY_UP) {
        dx = 0;
        dy = -1;
    }
    else if (input == KEY_DOWN) {
        dx = 0;
        dy = 1;
    }
    else if (input == KEY_LEFT) {
        dx = -1;
        dy = 0;
    }
    else if (input == KEY_RIGHT) {
        dx = 1;
        dy = 0;
    }
}

int Pacman::getVidas() const{
    return vidas;
}

void Pacman::perderVidas() {
    if (vidas > 0) {
        vidas--;
    }
}
