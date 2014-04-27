#include "functionsForPrint.h"
#include <iostream>

#include "GameCharacter.h"

namespace GameStuff {

    void printCharacter( const GameCharacter& gc ) {
        std::cout << "Name: " << gc.name( ) << std::endl;
        std::cout << "Health Value: " << gc.healthValue( ) << std::endl;
    }
}
