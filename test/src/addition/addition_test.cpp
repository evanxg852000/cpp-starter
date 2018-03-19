#include "catch2/catch.hpp"
#include "addition/addition.h"


TEST_CASE( "Addition tests", "[add]" ) {
    REQUIRE( add(9, 11) == 20 );
    REQUIRE( add(2, 21) == 23 );
}