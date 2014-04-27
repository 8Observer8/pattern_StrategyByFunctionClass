#include <iostream>
#include "Player.h"
#include "EvilBadGay.h"
#include "GameLevel.h"
#include "functionsForHealthCalc.h"
#include "functionsForPrint.h"

int main( ) {
    GameStuff::Player player( std::string( "David" ) );
    GameStuff::EvilBadGay monster( std::string( "Black" ) );

    // Default health functions
    std::cout << "Default health functions:" << std::endl;
    // Print on the screen
    GameStuff::printCharacter( player );
    GameStuff::printCharacter( monster );
    std::cout << std::endl;

    // Change health functions
    player.setHealthCalculator( GameStuff::loseHealthSlowly );
    monster.setHealthCalculator( GameStuff::loseHealthQuickly );
    std::cout << "After changing health functions to"
            " loseHealthSlowly and loseHealthQuickly:" << std::endl;
    // Print on the screen
    GameStuff::printCharacter( player );
    GameStuff::printCharacter( monster );
    std::cout << std::endl;

    // Change health functions
    player.setHealthCalculator( GameStuff::calcHealth );
    monster.setHealthCalculator( GameStuff::HealthCalculator( ) );
    std::cout << "After changing health functions to"
            " calcHealth and functor HealthCalculator:" << std::endl;
    // Print on the screen
    GameStuff::printCharacter( player );
    GameStuff::printCharacter( monster );

    return 0;
}
