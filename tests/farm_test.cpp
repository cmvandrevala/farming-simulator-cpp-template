#include <catch2/catch_test_macros.hpp>

#include "../src/farm.hpp"

// You can delete this test case and replace it with your own tests
TEST_CASE( "it returns a response" ) {
  REQUIRE( farm() == "This is an example function. You can delete it when you start this portfolio!" );
}
