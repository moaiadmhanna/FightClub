#include <iostream>
#include <Player.h>
#include <charckter.h>

using namespace std;

int main()
{
    charckter* charckter1 = new charckter("Muayad","FireBlast","FireBall",50,20);
    std::cout << charckter1->toString() << std::endl;
}
