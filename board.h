#pragma once
#include <iostream>

using namespace std;

class board {           // Класс Доска
private:
    int width;
    int height;
    int **grid;             // Динамическая матрица
    char empty = ' ';       // Признак пустого поля (знак) (??)
//    void drawGrid();
public:

/*    board(int _height, int _width, char _empty = ' ') : 
        height{_height}, width{_width}, empty{_empty}
    {}
*/
    board(board&copy);
    board(int w, int c);
    void show();
    void getStatus();       // Получения состояния ячейки по её координатам
    void getSize();         // Получения размера игральной доски
    void getMark();         // Получения признака пустого поля
    void setMark();         // Установки знака по заданным координатам
};