#include <string>
using namespace std;

class player {          // Класс Случайный Игрок
    private:
        string name;
        char symbol;
    public:
        player();
        void getInfo(string, char);     // Получение имени и символа игрока
        void turn();                    // Придумать ход
};