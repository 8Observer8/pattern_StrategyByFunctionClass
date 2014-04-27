#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

#include <functional>
#include <string>
#include "functionsForHealthCalc.h"

namespace GameStuff {

    class GameCharacter {
    public:
        /**
         * HealthCalcFunction – это любая вызываемая сущность, которой можно
         * передать в качестве параметра нечто, совместимое с GameCharacter,
         * и которая возвращает нечто, совместимое с int
         */
        typedef std::function<int (const GameCharacter&) > HealthCalcFunc;

        explicit GameCharacter( std::string name, HealthCalcFunc hcf = GameStuff::defaultHealthCalc )
        : m_name( name ), healthFunc( hcf ) {
        }

        int healthValue( ) const {
            return healthFunc( *this );
        }

        void setHealthCalculator( HealthCalcFunc hcf ) {
            healthFunc = hcf;
        }

        std::string name( ) const {
            return m_name;
        }

    private:
        HealthCalcFunc healthFunc;
        std::string m_name;
    };
}

#endif // GAMECHARACTER_H
