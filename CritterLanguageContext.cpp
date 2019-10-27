/**
 *  @file CritterLanguageContext.cpp
 *  @class CritterLanguageContext
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "CritterLanguageContext.h"

CritterLanguageContext::CritterLanguageContext(){

}

CritterLanguageContext::~CritterLanguageContext(){

}

/**
 * @param englishWord - english word to be translated to critterWord
 */
string CritterLanguageContext::lookupCritterWord(const std::string englishWord) const{
    return _wordTranslation.find(englishWord)->second;
}

/**
 * @param critterWord - critter word to be translated to englishWord
 */
bool CritterLanguageContext::lookupCritterWordTone(const std::string critterWord) const{
    return _wordTone.find(critterWord)->second;
}

/**
 * @param englishWord - english word to index _wordTranslation map
 * @param critterWord - critter word to assign to where englishWord index in _wordTranslation map
 * @param tone - tone to be assigned to where critterWord index in _wordTone map
 */
void CritterLanguageContext::assignWordTranslation(string englishWord, string critterWord, bool tone){
    _wordTranslation[englishWord] = critterWord;
    _wordTone[critterWord] = tone;
}