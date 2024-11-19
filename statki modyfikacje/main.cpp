#include "Code.h"

int main() {

    while (true) {

        Statki board;
        board.Run();

        std::cout << "Do you want to play again ? (t/n)" << std::endl;

        char response;

        std::cin >> response;
        if (response == 'n') {
            break;
        }
    }

    return 0;
}
