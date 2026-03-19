#include "Functions.hpp"
#include <iostream>
#include <cmath>
#include <string>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Выберите фигуру:\n1. Прямоугольник\n2. Треугольник\n" << std::endl;
    int i;
    std::cin >> i;
    switch (i) {
        case 1: {
            rectangle();
            break;
        }
        case 2: {
            triangle();
            break;
        }
        default: {
            std::cout << "Ошибка! Такой фигуры нет в списке" << std::endl;
            break;
        } 
        
    }
}

/*
# 1. Тест на гласные (Кириллица + Латиница + Пустая строка)
-a "Очередь" "Queue" ""

# 2. Тест на регистр (Смешанный ввод)
-b "Съешь ещё этих МЯГКИХ французских булок" "C++23 Standard"

# 3. Тест на спецсимволы (Знаки препинания, табы, символы)
-c "Привет, мир! (Hello... world?)" "Price: $100 & Exit#1"

# 4. Тест на палиндромы (Успех и Провал)
-d "шалаш" "потоп" "level" "not_a_palindrome" "Racecar"

# 5. Полный охват (Сразу всё)
-all "!аргентинаманитнегра!" "123-ABC-321" "!!!Спец-Тест!!!"
*/