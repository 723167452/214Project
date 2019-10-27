/**
 *  @file LanguageExpression.cpp
 *  @class LanguageExpression
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "LanguageExpression.h"

/**
 * @param name - name of word
 */
LanguageExpression::LanguageExpression(const std::string name){
    this->_word = name;
}

LanguageExpression::~LanguageExpression(){

}

/**
 * @param context - CritterLanguageContext object
 * look for citter word equivalent to word
 */
std::string LanguageExpression::evaluateWord(CritterLanguageContext& context){
    return context.lookupCritterWord(this->_word);
}

/**
 * @param context - CritterLanguageContext object
 * look for tone relevant to context
 */
bool LanguageExpression::evaluateTone(CritterLanguageContext& context){
    return context.lookupCritterWordTone(evaluateWord(context));
}

std::string LanguageExpression::getWord(){
    return this->_word;
}