# Gra w Statki (C++)

**Gra w statki** to implementacja klasycznej gry planszowej, w której gracze rozmieszczają swoje statki na planszy i próbują zatopić jednostki przeciwnika. Gra obsługuje tryb rozgrywki z komputerem z możliwością ręcznego lub automatycznego rozmieszczania statków.

## Funkcjonalności

- **Plansza 10x10** dla dwóch graczy (gracz i komputer).
- Obsługa statków:
  - 1 czteromasztowiec,
  - 2 trzymasztowce,
  - 3 dwumasztowce,
  - 4 jednomasztowce.
- **Dwa tryby gry**:
  1. Ręczne rozmieszczanie statków przez gracza.
  2. Automatyczne rozmieszczanie statków.
- **Zasady trafień**:
  - Trafienie pozwala na dodatkowy ruch.
  - Informacja o trafieniu lub pudle.
- Sprawdzenie stanu gry (zatopione wszystkie statki przeciwnika).

## Wymagania systemowe

- Kompilator C++ z obsługą standardu C++11 lub nowszego.
- System operacyjny: Windows, Linux lub macOS.
- Biblioteki standardowe (STL).

## Jak uruchomić?

1. **Sklonuj repozytorium**:
   ```bash
   git clone https://github.com/ErnestBytnar/sShipSimulationCpp.git
   cd statki



## Użyte technologie

- C++



## Autor

- Bytnar Ernest 


## Funkcje

```
boardInicializationPlayer();
```
- Funkcja, która odpowiada za utworzenie planszy dla gracza

```
boardInicializationPlayer2();
```
- Funkcjaktóra odpowiada za utworzenie planszy dla gracza z pseudolosowo rozstawionymi statkami
```
boardInicializationComputer();
```
- Funkcja, która odpowiada za utworzenie planszy dla komputera

```
Umiesc4(int nr);
```
- Funkcja, która ustawia na planszy statek 4-masztowy w podanym przez użytkownika kierunku 

```
Umiesc3(int nr);
```
- Funkcja, która ustawia na planszy statek 3-masztowy w podanym przez użytkownika kierunku 

```
Czy_3_Graniczy(int x, int y, std::string s, int nr);
```
- Funkcja, która sprawdza, czy można ustawić statek 3-masztowy na planszy i czy nie koliduje on z innymi już rozstawionymi

```
Umiesc2(int nr);
```
- Funkcja, która ustawia na planszy statek 2-masztowy w podanym przez użytkownika kierunku 

```
Czy_2_Graniczy(int x, int y, std::string s, int nr);
```
- Funkcja, która sprawdza, czy można ustawić statek 2-masztowy na planszy i czy nie koliduje on z innymi już rozstawionymi

```
Umiesc1(int nr);
```
- Funkcja, która ustawia na planszy statek 1-masztowy 
```
Czy_1_Graniczy(int x, int y, int nr);
```
- Funkcja, która sprawdza czy można ustawić statek 1-masztowy na planszy i czy nie koliduje on z innymi już rozstawionymi

```
checkIsFieldVisitedByPlayer(int x, int y);
```
- Sprawdza, czy pole zostało odwiedzone już przez gracza

```
checkIsFieldVisitedByComputer(int x, int y);
```
- Sprawdza, czy pole zostało odwiedzone już przez komputer

```
checkIsShipSunkenPlayer(char ship) const;
```
- Sprawdza, czy statki gracza są zatopione

```
checkIsShipSunkenComputer(char ship) const;
```
- Sprawdza, czy statki komputera są zatopione

```
showBoard() const;
```
- Wyświetla aktualny stan gry
```
playerTurn();
```
- Ruch gracza

```
computerTurn();
```
- Ruch komputera
```
checkIsGameOver();
```
- Funkcja, która sprawdza, czy gra się zakończyła
```
Pobierz_dobry_napis(std::string& napis);
```
- Funkcja, która sprawdza poprawność danych wpisanych przez użytkownika 

```
Just_digits(std::string& input);
```
- Funkcja, która sprawdza, czy użytkownik podaje liczby i czy są z zakresu 0-9
```
Load(int& parameter,std::string napis);
```
- Funkcja pomocnicza do Just_digits (std::string& input)

```
Run();
```
- Funckja rozpoczynająca grę 
