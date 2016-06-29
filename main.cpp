#include <iostream>
#include <additivedictionary.h>

bool cmp(int a, int b){
    return a < b;
}

bool eq(int a, int b){
    return a == b;
}

int main(int argc, char *argv[])
{
    AdditiveDictionary S;
    S.addValueFromFile("50.txt");
    return 0;
}
