#ifndef GAMELEVEL_H
#define GAMELEVEL_H

#include "GameCharacter.h"

namespace GameStuff {

    class GameLevel {
    public:

        /**
         * Функция-член для вычисления жизненной силы; возвращает не int
         */
        float health( const GameCharacter& ) const {
            return 6.5;
        }
    };
}

#endif // GAMELEVEL_H
