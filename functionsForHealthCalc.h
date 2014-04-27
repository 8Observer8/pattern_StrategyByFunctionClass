#ifndef FUNCTIONS_FOR_HEALTHCALC_H
#define FUNCTIONS_FOR_HEALTHCALC_H

namespace GameStuff {

    class GameCharacter; // опережающее объявление

    /**
     * Функция алгоритма по умолчанию для вычисления жизненной силы персонажа
     */
    int defaultHealthCalc( const GameCharacter& gc );

    /**
     * Функции вычисления жизненной силы с другим поведением
     */
    int loseHealthQuickly( const GameCharacter& gc );

    /**
     * Функции вычисления жизненной силы с другим поведением
     */
    int loseHealthSlowly( const GameCharacter& gc );

    /**
     * Функции вычисления жизненной силы; она возвращает не int
     */
    short calcHealth( const GameCharacter& gc );

    /**
     * Класс функциональных объектов, вычисляющих жизненную силу
     */
    struct HealthCalculator {

        int operator()(const GameCharacter&) const {
            return 5;
        }
    };
}

#endif // FUNCTIONS_FOR_HEALTHCALC_H
