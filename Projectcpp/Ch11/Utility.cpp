#include "Utility.h"

int RandomUtil::GetRandomInt(int range) // 1~ range 사이의 값을 반환 
{
    static std::random_device device;
    static std::mt19937 gen(device());
    std::uniform_int_distribution<> dist(1, range);
    return dist(gen);
}


