#ifndef ADWORD_H
#define ADWORD_H

#include <string>

class ADWord
{
    std::string value;
    unsigned amount;
public:
    ADWord(){
        this->value = "";
        this->amount = 0;
    }

    ADWord(std::string value, unsigned amount){
        this->value = value;
        this->amount = amount;
    }
    std::string getValue(){
        return value;
    }
    unsigned getAmount(){
        return amount;
    }
};

#endif // ADWORD_H
