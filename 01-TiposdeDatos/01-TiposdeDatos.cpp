#include <cassert>
#include <iostream>
#include <string>
#include <cstring>

using namespace std::literals;

int main() {

    //INT
    assert(0 == -1 + 1);
    assert(1 != 2 - 2);
    assert(1 >= -1);
    assert(-1 <= 0);
    assert(2 == 1 * 2);
    assert(-2 == 2 / -1);
    assert(0 == 2 % 2);

    //UNSIGNED
    assert(0u == 0u);
    assert(0u == 2u % 2u);
    assert(2u == 1u + 1u);
    assert(99u == 100u - 1u);
    assert(1u == 10u / 10u);
    assert(1u <= 2u);
    assert(20u >= 10u);

    //DOUBLE
    assert(0.0 - 1.0 == -1.0);
    assert(5.0 == 1.7 + 3.3);
    assert(5.0 != 3.2 - 1.8);
    assert(170.1 <= 199.78);
    assert(13.5 >= 6.7);
    assert(4.5 == 1.5 * 3.0);
    assert(8.5 == 17 / 2.0);
    assert(0.9 != 0.3 + 0.3 + 0.3);

    //BOOL
    assert(true);
    assert(false or true);
    assert(true and true);
    assert(not false);
    assert(false != true and true or false);
    assert(false != (5 + 5.0 == 10));
    assert(true == true);
    assert(true == (true and true) and false or true);

    //CHAR
    //A = 65; B = 66.
    assert('A' != 'B');
    assert('A' <= 'B');
    assert('A' == 65);
    assert('B' == 'A' + 1);
    assert(131 == 'A' + 'B');
    assert(1 == 'B' % 'A');
    assert('8' != '1' + '7');
    assert(1 == 'B' - 'A');
    assert('a' != 'A');
    assert('a' - 32 == 'A');

    //STRING
    std::string A{"hola"};
    std::string B{"hola"};
    assert(A == B);
    B = "chau";
    assert(B == "chau");
    assert(A != B);
    assert(A.length() == B.length());
    assert(A.length() == 4);
    assert("A"s == "A"s);          
    assert("AA"s >= "A"s);
    assert("1"s <= "2"s);
    assert("AA"s < "AB"s);
    assert("hola"s == "hola"s);
}