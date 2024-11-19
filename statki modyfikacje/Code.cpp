#include "Code.h"

void Statki::boardInicializationPlayer() {

    

    for (int i = 0; i < 10; i++) { // array initialization, blank spaces are filled with dots
        for (int j = 0; j < 10; j++) {
            board1[i][j] = '.';
            board2[i][j] = '.';
        }
    }
    
    
    
    Umiesc4(1);
    showBoard();
   
    for (int i = 0; i < 2; i++) {
        Umiesc3(1);
        showBoard();
    }
    for (int i = 0; i < 3; i++) {
        Umiesc2(1);
        showBoard();
    }

     
    for (int i = 0; i < 4; i++) {
        Umiesc1(1);
        showBoard();
    }
    

}
void Statki::boardInicializationPlayer2() {
    for (int i = 0; i < 10; i++) { // array initialization, blank spaces are filled with dots
        for (int j = 0; j < 10; j++) {
            board1[i][j] = '.';
            board2[i][j] = '.';
        }
    }

    Umiesc4(3);
    

    for (int i = 0; i < 2; i++) {
        Umiesc3(3);
        
    }
    for (int i = 0; i < 3; i++) {
        Umiesc2(3);
        
    }
    for (int i = 0; i < 4; i++) {
        Umiesc1(3);
        
    }

}
void Statki::Umiesc4(int nr) {
    showBoard();
    if (nr == 1) {
        

        std::cout << "Podaj kierunek P(pion) lub Z(poziomo) : " << std::endl;
        std::string s = "";
        Pobierz_dobry_napis(s);

        while (s != "P" && s != "Z")
        {

            std::cout << "Podaj inna literke! : " << std::endl;
            Pobierz_dobry_napis(s);
        }

        int x = 0; int y = 0;
        
        
        



        if (s == "P") {
            std::cout << "Podaj X: " << std::endl;
            Load(x,"Podaj X: ");
            while (x < 0 || x >= 10 || x + 3 >= 10)
            {
                std::cout << "Podaj X: " << std::endl;
                Load(x, "Podaj X: ");
            }
            std::cout << "Podaj Y: " << std::endl;
            Load(y, "Podaj Y: ");

            while (y < 0 || y >= 10)
            {
                std::cout << "Podaj Y: " << std::endl;
                Load(y, "Podaj Y: ");
            }
            
            board1[x][y] = 'A';
            board1[x + 1][y] = 'A';
            board1[x + 2][y] = 'A';
            board1[x + 3][y] = 'A';

        }
        
        else if (s == "Z") {
            std::cout << "Podaj X: " << std::endl;
            Load(x, "Podaj X: ");
            while (x < 0 || x >= 10)
            {
                std::cout << "Podaj X: " << std::endl;
                Load(x, "Podaj X: ");
            }
            std::cout << "Podaj Y: " << std::endl;
            Load(y, "Podaj Y: ");

            while (y < 0 || y >= 10 || y + 3 >= 10)
            {
                std::cout << "Podaj Y: " << std::endl;
                Load(y, "Podaj Y: ");
            }



            board1[x][y] = 'A';
            board1[x][y + 1] = 'A';
            board1[x][y + 2] = 'A';
            board1[x][y + 3] = 'A';

        }
    }
    else if (nr == 2) {

        srand(time(nullptr)); // Initialize the random number generator

        int x = rand() % 10; // Randomly select an x-coordinate from 0-9
        int y = rand() % 10; // Randomly select an y-coordinate from 0-9
        int which_s = rand() % 2;
        std::string s = "";

        if (which_s == 0) {
            s = "P";
        }
        else {
            s = "Z";
        }

        if (s == "P") {

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || x + 3 >= 10) {

                x = rand() % 10;
                y = rand() % 10;

            }
            board2[x][y] = 'B';
            board2[x + 1][y] = 'B';
            board2[x + 2][y] = 'B';
            board2[x + 3][y] = 'B';

        }
        else if (s == "Z") {

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || y + 3 >= 10) {

                x = rand() % 10;
                y = rand() % 10;

            }
            board2[x][y] = 'B';
            board2[x][y + 1] = 'B';
            board2[x][y + 2] = 'B';
            board2[x][y + 3] = 'B';

        }


    }
    else if (nr == 3) {

        

        int x = rand() % 10; // Randomly select an x-coordinate from 0-9
        int y = rand() % 10; // Randomly select an y-coordinate from 0-9
        int which_s = rand() % 2;
        std::string s = "";

        if (which_s == 0) {
            s = "P";
        }
        else {
            s = "Z";
        }

        if (s == "P") {

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || x + 3 >= 10) {

                x = rand() % 10;
                y = rand() % 10;

            }
            board1[x][y] = 'A';
            board1[x + 1][y] = 'A';
            board1[x + 2][y] = 'A';
            board1[x + 3][y] = 'A';

        }
        else if (s == "Z") {

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || y + 3 >= 10) {

                x = rand() % 10;
                y = rand() % 10;

            }
            board1[x][y] = 'A';
            board1[x][y + 1] = 'A';
            board1[x][y + 2] = 'A';
            board1[x][y + 3] = 'A';

        }


    }

   

}
void Statki::Load(int& parameter,std::string napis)
{
    while (true)
    {
        std::string input;
        std::getline(std::cin, input);
        
        
      
        if (Just_digits(input))
        {
            parameter = std::stoi(input);
            break;
        }
        else {
            std::cout << napis << std::endl;
        }

        
    }
}



bool Statki::Just_digits(std::string& input)
{
    int input_size = input.size();
    if (input_size == 0 || input_size > 8)
    {
        return false;
    }
    for (int i = 0; i < input_size; i++)
    {
        if (input[i] < '0' || input[i] > '9')
        {
            return false;
        }
    }
    return true;
}





void Statki::Umiesc3(int nr) {

    if (nr == 1) {
        std::cout << "Podaj kierunek P(pion) lub Z(poziomo) : " << std::endl;
        std::string s = "";
        Pobierz_dobry_napis(s);

        while (s != "P" && s != "Z")
        {

            std::cout << "Podaj inna literke! : " << std::endl;
            Pobierz_dobry_napis(s);
        }

        int x, y;
        




        if (s == "P") {
            std::cout << "Podaj X: " << std::endl;
            Load(x, "Podaj X: ");
            std::cout << "Podaj Y:" << std::endl;
            Load(y, "Podaj Y: ");

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || x + 2 >= 10 || Czy_3_Graniczy(x, y, s, nr)) {

                std::cout << "Podaj X:" << std::endl;
                Load(x, "Podaj X: ");
                std::cout << "Podaj Y:" << std::endl;
                Load(y, "Podaj Y: ");

            }

          



            board1[x][y] = 'A';
            board1[x + 1][y] = 'A';
            board1[x + 2][y] = 'A';

        }
        else if (s == "Z") {

   
            std::cout << "Podaj X: " << std::endl;
            Load(x, "Podaj X: ");
            std::cout << "Podaj Y:" << std::endl;
            Load(y, "Podaj Y: ");

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || y + 2 >= 10 || Czy_3_Graniczy(x, y, s, nr)) {

                std::cout << "Podaj X:" << std::endl;
                Load(x, "Podaj X: ");
                std::cout << "Podaj Y:" << std::endl;
                Load(y, "Podaj Y: ");

            }




            board1[x][y] = 'A';
            board1[x][y + 1] = 'A';
            board1[x][y + 2] = 'A';

        }

    }
    else if (nr == 2) {

        srand(time(nullptr)); // Initialize the random number generator

        int x = rand() % 10; // Randomly select an x-coordinate from 0-9
        int y = rand() % 10; // Randomly select an y-coordinate from 0-9
        int which_s = rand() % 2;
        std::string s = "";

        if (which_s == 0) {
            s = "P";
        }
        else {
            s = "Z";
        }
        if (s == "P") {

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || x + 2 >= 10 || Czy_3_Graniczy(x, y, s, nr)) {

                x = rand() % 10;
                y = rand() % 10;

            }
            board2[x][y] = 'B';
            board2[x + 1][y] = 'B';
            board2[x + 2][y] = 'B';

        }
        else if (s == "Z") {

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || y + 2 >= 10 || Czy_3_Graniczy(x, y, s, nr)) {

                x = rand() % 10;
                y = rand() % 10;

            }

            board2[x][y] = 'B';
            board2[x][y + 1] = 'B';
            board2[x][y + 2] = 'B';

        }
        

    }
    else if (nr == 3) {

        

        int x = rand() % 10; // Randomly select an x-coordinate from 0-9
        int y = rand() % 10; // Randomly select an y-coordinate from 0-9
        int which_s = rand() % 2;
        std::string s = "";

        if (which_s == 0) {
            s = "P";
        }
        else {
            s = "Z";
        }
        if (s == "P") {

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || x + 2 >= 10 || Czy_3_Graniczy(x, y, s, nr)) {

                x = rand() % 10;
                y = rand() % 10;

            }
            board1[x][y] = 'A';
            board1[x + 1][y] = 'A';
            board1[x + 2][y] = 'A';

        }
        else if (s == "Z") {

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || y + 2 >= 10 || Czy_3_Graniczy(x, y, s, nr)) {

                x = rand() % 10;
                y = rand() % 10;

            }

            board1[x][y] = 'A';
            board1[x][y + 1] = 'A';
            board1[x][y + 2] = 'A';

        }


    }

    

}
bool Statki::Czy_3_Graniczy(int x, int y, std::string s, int nr) {

    if (s == "P") {
        for (int i = x - 1; i <= x + 3; i++) {
            for (int j = y - 1; j <= y + 1; j++) {

                if (i >= 0 && i < 10 && j >= 0 && j < 10) {
                    if (board1[i][j] == 'A' && nr == 1) {
                        return true;
                    }
                    if (board2[i][j] == 'B' && nr == 2) {
                        return true;
                    }
                    if (board1[i][j] == 'A' && nr == 3) {
                        return true;
                    }
                }

            }
        }
        return false;
    }
    else if (s == "Z") {
        for (int i = x - 1; i <= x + 1; i++) {
            for (int j = y - 1; j <= y + 3; j++) {

                if (i >= 0 && i < 10 && j >= 0 && j < 10) {
                    if (board1[i][j] == 'A' && nr == 1) {
                        return true;
                    }
                    if (board2[i][j] == 'B' && nr == 2) {
                        return true;
                    }
                    if (board1[i][j] == 'A' && nr == 3) {
                        return true;
                    }
                }

            }
        }
        return false;
    }
    return false;

}
void Statki::Umiesc2(int nr) {

    if (nr == 1) {
        std::cout << "Podaj kierunek P(pion) lub Z(poziomo) : " << std::endl;
        std::string s = "";
        Pobierz_dobry_napis(s);

        while (s != "P" && s != "Z")
        {

            std::cout << "Podaj inna literke! : " << std::endl;
            Pobierz_dobry_napis(s);
        }

        int x, y;
        

        if (s == "P") {

            std::cout << "Podaj X: " << std::endl;
            Load(x, "Podaj X: ");
            std::cout << "Podaj Y:" << std::endl;
            Load(y, "Podaj Y: ");

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || x + 1 >= 10 || Czy_2_Graniczy(x, y, s, nr)) {

                std::cout << "Podaj X:" << std::endl;
                Load(x, "Podaj X: ");
                std::cout << "Podaj Y:" << std::endl;
                Load(y, "Podaj Y: ");

            }


            board1[x][y] = 'A';
            board1[x + 1][y] = 'A';

        }
        else if (s == "Z") {

            std::cout << "Podaj X: " << std::endl;
            Load(x, "Podaj X: ");
            std::cout << "Podaj Y:" << std::endl;
            Load(y, "Podaj Y: ");

            while (x < 0 || x >= 10 || y < 0 || y >= 10 || y + 1 >= 10 || Czy_2_Graniczy(x, y, s, nr)) {

                std::cout << "Podaj X:" << std::endl;
                Load(x,"Podaj X: ");
                std::cout << "Podaj Y:" << std::endl;
                Load(y, "Podaj Y: ");

            }

            board1[x][y] = 'A';
            board1[x][y + 1] = 'A';

        }

    }
    else if (nr == 2) {
        srand(time(nullptr)); // Initialize the random number generator

        int x = rand() % 10; // Randomly select an x-coordinate from 0-9
        int y = rand() % 10; // Randomly select an y-coordinate from 0-9
        int which_s = rand() % 2;
        std::string s = "";

        if (which_s == 0) {
            s = "P";
        }
        else {
            s = "Z";
        }

        if (s == "P") {
            while (x < 0 || x >= 10 || y < 0 || y >= 10 || x + 1 >= 10 || Czy_2_Graniczy(x, y, s, nr)) {

                x = rand() % 10;
                y = rand() % 10;
            }
            board2[x][y] = 'B';
            board2[x+1][y] = 'B';
        }
        else if (s == "Z") {
            while (x < 0 || x >= 10 || y < 0 || y >= 10 || y + 1 >= 10 || Czy_2_Graniczy(x, y, s, nr)) {

                x = rand() % 10; 
                y = rand() % 10;

            }
            board2[x][y] = 'B';
            board2[x][y + 1] = 'B';

        }
        

    }
    else if (nr == 3) {
        

        int x = rand() % 10; // Randomly select an x-coordinate from 0-9
        int y = rand() % 10; // Randomly select an y-coordinate from 0-9
        int which_s = rand() % 2;
        std::string s = "";

        if (which_s == 0) {
            s = "P";
        }
        else {
            s = "Z";
        }

        if (s == "P") {
            while (x < 0 || x >= 10 || y < 0 || y >= 10 || x + 1 >= 10 || Czy_2_Graniczy(x, y, s, nr)) {

                x = rand() % 10;
                y = rand() % 10;
            }
            board1[x][y] = 'A';
            board1[x + 1][y] = 'A';
        }
        else if (s == "Z") {
            while (x < 0 || x >= 10 || y < 0 || y >= 10 || y + 1 >= 10 || Czy_2_Graniczy(x, y, s, nr)) {

                x = rand() % 10;
                y = rand() % 10;

            }
            board1[x][y] = 'A';
            board1[x][y + 1] = 'A';

        }


    }


    

}
bool Statki::Czy_2_Graniczy(int x, int y, std::string s, int nr) {

    if (s == "P") {
        for (int i = x - 1; i <= x + 2; i++) {
            for (int j = y - 1; j <= y + 1; j++) {

                if (i >= 0 && i < 10 && j >= 0 && j < 10) {

                    if (board1[i][j] == 'A' && nr == 1) {
                        return true;
                    }
                    if (board2[i][j] == 'B' && nr == 2) {
                        return true;
                    }
                    if (board1[i][j] == 'A' && nr == 3) {
                        return true;
                    }
                }

            }
        }
        return false;
    }
    else if (s == "Z") {
        for (int i = x - 1; i <= x + 1; i++) {
            for (int j = y - 1; j <= y + 2; j++) {

                if (i >= 0 && i < 10 && j >= 0 && j < 10) {
                    if (board1[i][j] == 'A' && nr == 1) {
                        return true;
                    }
                    if (board2[i][j] == 'B' && nr == 2) {
                        return true;
                    }
                    if (board1[i][j] == 'A' && nr == 3) {
                        return true;
                    }
                }

            }
        }
        return false;
    }
    return false;
}
void Statki::Umiesc1(int nr) {

    if (nr == 1) {
        int x, y;
        std::cout << "Podaj X:" << std::endl;
        Load(x, "Podaj X: ");
        std::cout << "Podaj Y:" << std::endl;
        Load(y, "Podaj Y: ");

        while (x < 0 || x >= 10 || y < 0 || y >= 10 || Czy_1_Graniczy(x, y, nr)) {

            std::cout << "Podaj X:" << std::endl;
            Load(x, "Podaj X: ");
            std::cout << "Podaj Y:" << std::endl;
            Load(y,"Podaj Y: ");

        }
        board1[x][y] = 'A';
    }
   



    else if (nr == 2) {

        srand(time(nullptr)); // Initialize the random number generator

        int x = rand() % 10; // Randomly select an x-coordinate from 0-9
        int y = rand() % 10; // Randomly select an y-coordinate from 0-9

        while (x < 0 || x >= 10 || y < 0 || y >= 10 || Czy_1_Graniczy(x, y, nr)) {

            x = rand() % 10;
            y = rand() % 10;

        }
        board2[x][y] = 'B';
    }
    else if (nr == 3) {

        

        int x = rand() % 10; // Randomly select an x-coordinate from 0-9
        int y = rand() % 10; // Randomly select an y-coordinate from 0-9

        while (x < 0 || x >= 10 || y < 0 || y >= 10 || Czy_1_Graniczy(x, y, nr)) {

            x = rand() % 10;
            y = rand() % 10;

        }
        board1[x][y] = 'A';
    }

}
bool Statki::Czy_1_Graniczy(int x, int y, int nr) {

    for (int i = x - 1; i <= x + 1; i++) {
        for (int j = y - 1; j <= y + 1; j++) {

            if (i >= 0 && i < 10 && j >= 0 && j < 10) {
                if (board1[i][j] == 'A' && nr == 1) {
                    return true;
                }
                if (board2[i][j] == 'B' && nr == 2) {
                    return true;
                }
                if (board1[i][j] == 'A' && nr == 3) {
                    return true;
                }
            }

        }
    }
    return false;

}

void Statki::boardInicializationComputer() {


    Umiesc4(2);

    for (int i = 0; i < 2; i++) {
        Umiesc3(2);

    }
    for (int i = 0; i < 3; i++) {
        Umiesc2(2);
    }
    for (int i = 0; i < 4; i++) {
        Umiesc1(2);
    }
    

  

}

// A function that checks whether the indicated field has already been visited by the player
bool Statki::checkIsFieldVisitedByPlayer(int x, int y) {
    //Check if the field has already been visited
    if (board1[x][y] == 'X' || board1[x][y] == 'O') {
        return true;
    }
    return false;
}

bool Statki::checkIsFieldVisitedByComputer(int x, int y) {
    //Check if the field has already been visited
    if (board2[x][y] == 'X' || board2[x][y] == 'O') {
        return true;
    }
    return false;
}

bool Statki::checkIsShipSunkenPlayer(char ship) const {
    // Go through all the board spaces and check if the ship is present
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (board1[i][j] == ship) {
                // The ship is present, so it hasn't been sunk yet
                return false;
            }
        }
    }
    return true; // if there are no more ships
}

bool Statki::checkIsShipSunkenComputer(char ship) const {
    // Go through all the board spaces and check if the ship is present
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (board2[i][j] == ship) {
                // The ship is present, so it hasn't been sunk yet
                return false;
            }
        }
    }
    return true; // if there are no more ships
}

// A function that displays the current state of the board
void Statki::showBoard() const {
    std::cout << "Player A's board:\n";
    std::cout << "  0 1 2 3 4 5 6 7 8 9\n";
    for (int i = 0; i < 10; i++) {
        std::cout << i << " ";
        for (int j = 0; j < 10; j++) {
            std::cout << board1[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    std::cout << "Player B's board:\n";
    std::cout << "  0 1 2 3 4 5 6 7 8 9\n";
    for (int i = 0; i < 10; i++) {
        std::cout << i << " ";
        for (int j = 0; j < 10; j++) {
            if (board2[i][j] == 'B') {
                std::cout << ". ";
            }
            else {
                std::cout << board2[i][j] << " ";
            }

        }
        std::cout << "\n";
    }
}
// A function that allows the player to shoot at a given location on the board
bool Statki::playerTurn() {
    int x, y;
    
    
    std::cout << "Podaj X:" << std::endl;
    Load(x, "Podaj X: ");
    std::cout << "Podaj Y:" << std::endl;
    Load(y, "Podaj Y: ");

    while (x < 0 || x >= 10 || y < 0 || y >= 10 || checkIsFieldVisitedByComputer(x, y)) {

        std::cout << "Podaj X:" << std::endl;
        Load(x, "Podaj X: ");
        std::cout << "Podaj Y:" << std::endl;
        Load(y, "Podaj Y: ");

    }
    



    if (board2[x][y] == 'B') {
        std::cout << "Trafienie!\n";
        board2[x][y] = 'X';
        return true;
    }
    else {
        std::cout << "Pudlo!\n";
        board2[x][y] = 'O';
        return false;
    }
}

// A function that allows the computer to shoot at a given location on the board
bool Statki::computerTurn() {
    srand(time(nullptr)); // Initialize the random number generator

    int x = rand() % 10; // Randomly select an x-coordinate from 0-9
    int y = rand() % 10; // Randomly select an y-coordinate from 0-9
    while (checkIsFieldVisitedByPlayer(x, y)) {
        // check that the field has not already been visited
        x = rand() % 10;
        y = rand() % 10;
    }

    if (board1[x][y] == 'A') {
        std::cout << "Komputer trafia w  " << x << " " << y << "!\n";
        board1[x][y] = 'X';
        return true;
    }
    else {
        std::cout << "Komputer pudluje na  " << x << " " << y << "!\n";
        board1[x][y] = 'O';
        return false;
    }
}

// A function that checks if the game is over
bool Statki::checkIsGameOver() {
    // Check if all of player A's ships have been sunk
    if (checkIsShipSunkenPlayer('A')) {
        std::cout << "Komputer B wygrywa!\n";
        return true;
    }

    // Check if all of player B's ships have been sunk
    if (checkIsShipSunkenComputer('B')) {
        std::cout << "Gracz A wygrywa!\n";
        return true;
    }

    return false; // The game is not over
}

void Statki::Pobierz_dobry_napis(std::string& napis)
{
    while (true)
    {
        std::string input;
        std::getline(std::cin, input);
        if (input == "P" || input == "Z")
        {
            napis = input;
            break;
        }
        else
        {
            std::cout << "Podaj inna literke!" << std::endl;
        }
    }
}

void Statki::Run() {
    std::cout << "  --------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Witaj w grze w statki. Gracz i komputer wybieraja 1 4-masztowiec, 2 3-masztowce, 3 2-masztowce, 4 1-masztowce  " << std::endl;
    std::cout << "                     Do wyboru kierunki rozstawiania statkow. P-pionowo Z-poziomo  " << std::endl;
    std::cout << "         Dostepne tryby gry 0 - statki rozmieszczone przez czlowieka 1 - statki automatycznie rozstawione  " << std::endl;
    std::cout << "                                Przy trafieniu statku dodatkowy ruch !  " << std::endl;
    std::cout << "  --------------------------------------------------------------------------------------------------------" << std::endl;
    system("pause");
    system("cls");


    int tryb_gry;
    std::cout << "Podaj tryb gry : 0 - statki rozmieszczone przez czlowieka 1 - automatyczne rozstawianie " << std::endl;

    Load(tryb_gry, "Podaj tryb gry : 0 - statki rozmieszczone przez czlowieka 1 - automatyczne rozstawianie ");
    while (tryb_gry != 0 && tryb_gry!=1)
    {
        std::cout << "Podaj tryb gry : 0 - statki rozmieszczone przez czlowieka 1 - automatyczne rozstawianie " << std::endl;
        Load(tryb_gry, "Podaj tryb gry : 0 - statki rozmieszczone przez czlowieka 1 - automatyczne rozstawianie ");
    }

    

    if (tryb_gry == 0) {
        
        this->boardInicializationPlayer();
        
    }
    else if (tryb_gry == 1) {
        
        this->boardInicializationPlayer2();
        
    }

    
    

    this->boardInicializationComputer();
    std::cout << "Teraz zaczyna sie wojna! Czas na atak:" << std::endl;
    while (true) {
        // Player A's turn
        this->showBoard();
        while (this->playerTurn()) {
            this->showBoard();
            if (this->checkIsGameOver()) {
                break;
            }
        }
        
        
        if (this->checkIsGameOver()) {
            break;
        }

        // Player B's turn
        
        
        while (this->computerTurn()) {
            this->showBoard();
            if (this->checkIsGameOver()) {
                break;
            }

        }
        
        if (this->checkIsGameOver()) {
            break;
        }
    }

}