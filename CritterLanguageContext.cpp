#include "CritterLanguageContext.h"

CritterLanguageContext::CritterLanguageContext(){

}

CritterLanguageContext::~CritterLanguageContext(){

}

string CritterLanguageContext::lookupCritterWord(const std::string englishWord) const{
    return _wordTranslation.find(englishWord)->second;
}

bool CritterLanguageContext::lookupCritterWordTone(const std::string critterWord) const{
    return _wordTone.find(critterWord)->second;
}


void CritterLanguageContext::assignWordTranslation(string englishWord, string critterWord, bool tone){
    _wordTranslation[englishWord] = critterWord;
    _wordTone[critterWord] = tone;
}