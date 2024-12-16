#include "Run.h"

int main() {
    std::vector<std::string> layout = {
        "############################",
        "#..........................#",
        "#.#######.########.#######.#",
        "#...##....##....##....##...#",
        "###.##.##.##.##.##.##.##.###",
        "###.##.##.##.##.##.##.##.###",
        "###.##.##.##.##.##.##.##.###",
        "#......##....##....##......#",
        "###.##.##.########.##.##.###",
        "#...##................##...#",
        "#.#######.########.#######.#",
        "#.........#      #.........#",
        "###.#####.########.#####.###",
        "#......##............##....#",
        "#.####.##.########.##.####.#",
        "#.####.##.########.##.####.#",
        "#............##............#",
        "####.#######.##.#######.####",
        "####.#######.##.#######.####",
        "#....##..............##....#",
        "#.##.##.##.######.##.##.##.#",
        "#.##.##.##.######.##.##.##.#",
        "#.##....##........##....##.#",
        "#.#####.####.##.####.#####.#",
        "#............##............#",
        "############################"
    };

    Map map(layout);
    Run game(layout);
    game.start();

    return 0;
}


