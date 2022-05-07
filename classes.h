#include <string>
using namespace std;

class player {      // Класс Случайный Игрок
    private:
        string name;
        char symbol;
    public:
        void getInfo(string, char);     // Получение имени и символа игрока
        void turn();                    // Придумать ход
};

class smartPlayer {     // Класс Умный Игрок
    private:
        string name;
        char symbol;
    public:
        void getInfo(string, char);     // Получение имени и символа игрока
        void turn();                    // Придумать ход

};

class board {       // Класс Доска
    private:
        int height;
        int width;
        int **grid = new int*[height];  // Динамическая матрица
        char empty = ' ';               // Признак пустого поля (знак) (??) n = null
    public:
        void getStatus(int, int);       // Получения состояния ячейки по её координатам
        void getHeight(int);            // Получения размера по вертикали
        void getWidth(int);             // Получения размера по горизонтали
        void getMark(int, int);         // Получения признака пустого поля
        void setMark(int, int);         // Установки знака по заданным координатам
};

class tictactoe {       // Класс Игра
    private:

    public:

};