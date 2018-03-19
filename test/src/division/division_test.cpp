#include "catch2/catch.hpp"
#include "division/division.h"


TEST_CASE( "Division tests", "[divide]" ) {
    REQUIRE( divide(12, 2) == 6 );
    REQUIRE( divide(12, 3) == 4 );
}