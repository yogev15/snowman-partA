/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <string>
using namespace std;
#include <iostream>


TEST_CASE("Good snowman code") {

    //diffrent hats check
    CHECK(snowman(11114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(24242123) == string("\n  ___  \n ..... \n\\(o -) \n (] [)>\n (___) "));
    CHECK(snowman(32443333) == string("\n   _   \n  /_\\  \n (-.-) \n/(> <)\\\n (___) ")); 
    CHECK(snowman(41341144) == string("\n (_*_) \n (O,-) \n<(   )>\n (   ) "));
 
     //diffrent noses check
    CHECK(snowman(11114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(42242123) == string("\n (_*_) \n ..... \n\\(o.-) \n (] [)>\n (___) "));
    CHECK(snowman(33443333) == string("\n   _   \n  /_\\  \n (-_-) \n/(> <)\\\n (___) "));  
    CHECK(snowman(44341144) == string("\n (_*_) \n (O -) \n<(   )>\n (   ) "));

    //diffrent eyes check
    //left
    CHECK(snowman(24142123) == string("\n  ___  \n ..... \n\\(. -) \n (] [)>\n (___) "));
    CHECK(snowman(11214411) == string("\n_===_\n(o,.)\n( : )\n( : )"));
    CHECK(snowman(32343333) == string("\n   _   \n  /_\\  \n (O.-) \n/(> <)\\\n (___) ")); 
    CHECK(snowman(41441144) == string("\n (_*_) \n (-,-) \n<(   )>\n (   ) "));
    //right
    CHECK(snowman(24212123) == string("\n  ___  \n ..... \n\\(o .) \n (] [)>\n (___) "));
    CHECK(snowman(11124411) == string("\n_===_\n(.,o)\n( : )\n( : )"));
    CHECK(snowman(32433333) == string("\n   _   \n  /_\\  \n (-.O) \n/(> <)\\\n (___) ")); 
    CHECK(snowman(41341144) == string("\n (_*_) \n (O,-) \n<(   )>\n (   ) "));

    //diffrent arms check
    //left
    CHECK(snowman(11111411) == string("\n _===_\n (.,.)\n<( : )\n ( : )"));
    CHECK(snowman(32442333) == string("\n   _   \n  /_\\  \n (-.-) \n\\(> <)\\\n (___) ")); 
    CHECK(snowman(44243123) == string("\n  ___  \n ..... \n/(o -) \n (] [)>\n (___) "));
    CHECK(snowman(41344144) == string("\n (_*_) \n (O,-) \n (   )>\n (   ) "));
    //right
    CHECK(snowman(11114111) == string("\n_===_ \n(.,.) \n( : )>\n( : ) "));
    CHECK(snowman(24242223) == string("\n  ___  \n ..... \n\\(o -) \n (] [)/\n (___) "));
    CHECK(snowman(41341344) == string("\n (_*_) \n (O,-) \n<(   )\\n (   ) "));
    CHECK(snowman(32443433) == string("\n   _   \n  /_\\  \n (-.-) \n/(> <) \n (___) ")); 

    //diffrent torsos check
    CHECK(snowman(24242113) == string("\n  ___  \n ..... \n\\(o -) \n ( : )>\n (___) "));
    CHECK(snowman(11114421) == string("\n_===_\n(.,.)\n(] [)\n( : )"));
    CHECK(snowman(41341134) == string("\n (_*_) \n (O,-) \n<(> <)>\n (   ) "));
    CHECK(snowman(32443334) == string("\n   _   \n  /_\\  \n (-.-) \n/(   )\\\n (___) ")); 

    //diffrent bases check
   
    CHECK(snowman(24242121) == string("\n  ___  \n ..... \n\\(o -) \n (] [)>\n ( : ) "));
    CHECK(snowman(32443332) == string("\n   _   \n  /_\\  \n (-.-) \n/(> <)\\\n (" ") ")); 
    CHECK(snowman(41341143) == string("\n (_*_) \n (O,-) \n<(   )>\n (___) "));
    CHECK(snowman(11114414) == string("\n_===_\n(.,.)\n( : )\n(   )"));
}

TEST_CASE("negative snowmans") {
    CHECK_THROWS(snowman(-12341212));
    CHECK_THROWS(snowman(-11114411));
    CHECK_THROWS(snowman(-11123242));
}

TEST_CASE("short digits snowmans") {
    CHECK_THROWS(snowman(1241));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(1422342));
}


TEST_CASE("long digits snowmans") {
    CHECK_THROWS(snowman(111132341231));
    CHECK_THROWS(snowman(1111323411));
    CHECK_THROWS(snowman(111411231));
}

TEST_CASE("bad inputs snowmans") {
    CHECK_THROWS(snowman(11417321));
    CHECK_THROWS(snowman(12485876));
    CHECK_THROWS(snowman(67819945));
}
