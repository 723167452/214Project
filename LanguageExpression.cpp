#include "LanguageExpression.h"

LanguageExpression::LanguageExpression(const std::string name){
    this->_word = name;
}

LanguageExpression::~LanguageExpression(){

}

std::string LanguageExpression::evaluateWord(CritterLanguageContext& context){
    return context.lookupCritterWord(this->_word);
}

bool LanguageExpression::evaluateTone(CritterLanguageContext& context){
    return context.lookupCritterWordTone(evaluateWord(context));
}

std::string LanguageExpression::getWord(){
    return this->_word;
}