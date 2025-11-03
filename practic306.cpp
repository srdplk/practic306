
#include <iostream>
#include <math.h>
#include <iomanip>
#include <sstream>

using namespace std;

void magazine() {
    std::cout << setiosflags(ios::left);
    srand(time(NULL));

    std::string vegetables[5]{ "carrot", "potato", "cucumber", "eggplant", "corn" };
    int price[5]{ 70, 90, 80, 170, 230 };
    int quanity[5]{ 3, 5, 18, 32, 4 };

    int cash = 500 + rand() % 1000;

    std::cout << "Сегодня у вас в кошеле — " << cash << " рублей\n";
    std::cout << "Приветствуем в нашем бюджетном магазине, у нас есть такие позиции: \n";

    std::cout << setw(10) << "Name" << setw(15) << "Price " << setw(5) << "Cout\n";

    string vega;
    int quan;
    while (true) {

        for (int i = 0; i < 5; i++) {
            std::cout << setw(10) << vegetables[i] << " \t" << setw(10) << price[i] << " \t" << quanity[i] << endl;
        }
        std::cout << "Что вы хотите купить? Сейчас у вас " << cash << " рублей.\n";
        std::cin >> vega;

        for (int i = 0; i < size(vegetables); i++) {

            if (vega == vegetables[i]) {
                std::cin >> quan;

                if (quanity[i] >= quan && cash >= (price[i] * quan)) {
                    cash = cash - price[i] * quan;
                    quanity[i] = quanity[i] - quan;

                }
            }
        }


    }














    /*string name;
    string inventory;
    int quan;
    int q;
    std::cout << "Сколько пунктов товара вы хотите приобрести?\n";
    std::cin >> q;

    for (int i = 0; i < q; i++) {

        std::cout << "Чтобы купить определенное количество товара, введите название и количество!\n";
        std::cin >> name;
        std::cin >> quan;
        inventory = inventory + " " + name + " " + std::to_string(quan) + "шт";

        if (name == vegetables[0] && quan <= quanity[0] && cash >= (price[0] * quan)) {
            cash = cash - (price[0] * quan);
            quanity[0] = quanity[0] - quan;
            for (int i = 0; i < 5; i++) {
                std::cout << setw(10) << vegetables[i] << " \t" << setw(10) << price[i] << " \t" << quanity[i] << endl;
            }
            std::cout << "Вы купили " << name << ", в количестве " << quan << "шт. " << "денег осталось = " << cash << "руб.\n";
        }
        else if (name == vegetables[1] && quan <= quanity[1] && cash >= (price[1] * quan)) {
            cash = cash - (price[1] * quan);
            quanity[1] = quanity[1] - quan;
            for (int i = 0; i < 5; i++) {
                std::cout << setw(10) << vegetables[i] << " \t" << setw(10) << price[i] << " \t" << quanity[i] << endl;
            }
            std::cout << "Вы купили " << name << ", в количестве " << quan << "шт. " << "денег осталось = " << cash << "руб.\n";
        }
        else if (name == vegetables[2] && quan <= quanity[2] && cash >= (price[2] * quan)) {
            cash = cash - (price[2] * quan);
            quanity[2] = quanity[2] - quan;
            for (int i = 0; i < 5; i++) {
                std::cout << setw(10) << vegetables[i] << " \t" << setw(10) << price[i] << " \t" << quanity[i] << endl;
            }
            std::cout << "Вы купили " << name << ", в количестве " << quan << "шт. " << "денег осталось = " << cash << "руб.\n";
        }
        else if (name == vegetables[3] && quan <= quanity[3] && cash >= (price[3] * quan)) {
            cash = cash - (price[3] * quan);
            quanity[3] = quanity[3] - quan;
            for (int i = 0; i < 5; i++) {
                std::cout << setw(10) << vegetables[i] << " \t" << setw(10) << price[i] << " \t" << quanity[i] << endl;
            }
            std::cout << "Вы купили " << name << ", в количестве " << quan << "шт. " << "денег осталось = " << cash << "руб.\n";
        }
        else if (name == vegetables[4] && quan <= quanity[4] && cash >= (price[4] * quan)) {
            cash = cash - (price[4] * quan);
            quanity[4] = quanity[4] - quan;
            for (int i = 0; i < 5; i++) {
                std::cout << setw(10) << vegetables[i] << " \t" << setw(10) << price[i] << " \t" << quanity[i] << endl;
            }
            std::cout << "Вы купили " << name << ", в количестве " << quan << "шт. " << "денег осталось = " << cash << "руб.\n";
        }
        else {
            std::cout << "Вам не хватает денег. Или же нет столько товара в магазине.\n";
        }
    }
    std::cout << "У вас с собой в пакете: " << inventory;*/







    //aboba
    /*std::cout << "Осталось в наличии: \n";*/

    /*for (int i = 0; i < 5; i++) {
     std::cout << setw(10) << vegetables[i] << " \t" << setw(10) << price[i] << " \t" << quanity[i] << endl;
    }*/


    /*std::cout << "Vegetables: ";
    for (int i = 0; i < 5; i++) {
      std::cout << "| " << vegetables[i] << " | ";
      }
    std::cout << "\n";
    std::cout << "Quanity:    ";
    for (int j = 0; j < 5; j++) {
      std::cout << "|    " << quanity[j] << "   | ";
     }
    std::cout << "\n";
    std::cout << "Price:      ";
    for (int q = 0; q < 5; q++) {
      std::cout << "|   " << price[q] << "   | ";
    }
    std::cout << "\n";*/
}



void test() {

    std::string vegetables[5]{ "carrot", "potato", "cucumber", "eggplant", "corn" };
    int price[5]{ 70, 90, 80, 170, 230 };
    int quanity[]{ 3, 5, 18, 32, 4, 5, 2, 7, -9, 1232, 3425, 52463 ,34636 ,67,764574,647474,48756846,367345747,58978,4856746,47474576434,243,4756,5685,56858,69079,58344,353567236,4774,3455643,3536,68585,1412252,3473453,22,55646,25425,2532552,2525,25 };

    for (int i = 0; i < size(quanity); i++) {
        if (quanity[i] == 4774) {
            // std::cout << "Число меньше 10 = " << quanity[i] << endl;
            std::cout << i << "элементе массива";
        }
    }

}


int main() {

    srand(time(0));
    setlocale(LC_ALL, "Russian");

    magazine();
    //test();
}