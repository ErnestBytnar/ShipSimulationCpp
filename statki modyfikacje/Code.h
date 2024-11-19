#pragma once
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
#include<algorithm>
#include<regex>
#include <limits>



class Statki {
private:
    char board1[10][10];
    char board2[10][10];

public:
    

    void boardInicializationPlayer();
    void boardInicializationComputer();
    
    bool checkIsFieldVisitedByPlayer(int x, int y);
    bool checkIsFieldVisitedByComputer(int x, int y);
    void Load(int& parameter, std::string napis);
    
    bool Just_digits(std::string& input);
    bool checkIsShipSunkenPlayer(char ship)const;
    bool checkIsShipSunkenComputer(char ship)const;
    void showBoard()const;
    bool playerTurn();
    bool computerTurn();
    bool checkIsGameOver();
    void Umiesc4(int nr);
    void Umiesc3(int nr);
    void Umiesc2(int nr);
    void Umiesc1(int nr);
    bool Czy_3_Graniczy(int x,int y, std::string s,int nr);
    bool Czy_2_Graniczy(int x,int y, std::string s, int nr);
    bool Czy_1_Graniczy(int x, int y,int nr);
    void Valid(int& par);
    bool secure_cin(int x, int y);
    bool is_digits(const std::string& str);
    void isValidCoordinate(int x, int y);
    void boardInicializationPlayer2();
    void Pobierz_dobry_napis(std::string& napis);
    

    void Run();

};
