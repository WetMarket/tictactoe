#pragma once
#include <iostream>

using namespace std;

class board {           // Класс Доска
private:
    int height;
    int width;
    int **grid = new int*[height];  // Динамическая матрица
    char empty = ' ';               // Признак пустого поля (знак) (??)
//    void drawGrid();
public:
    board(int _height, int _width, char _empty = ' ') : 
        height{_height}, width{_width}, empty{_empty}
    {}
    void getStatus(int, int);       // Получения состояния ячейки по её координатам
    void getSize(int, int);         // Получения размера игральной доски
    void getMark(int, int);         // Получения признака пустого поля
    void setMark(int, int);         // Установки знака по заданным координатам
};