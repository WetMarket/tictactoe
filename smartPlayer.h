#include <string>
using namespace std;

class smartPlayer {     // Класс Умный Игрок
    private:
        string name;
        char symbol;
    public:
        smartPlayer();
        void getInfo(string, char);     // Получение имени и символа игрока
        void turn();                    // Придумать ход

};