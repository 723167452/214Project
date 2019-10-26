#ifndef LANGUAGEEXPRESSION_H
#define LANGUAGEEXPRESSION_H
#include <string>
#include "CritterLanguageContext.h"
using namespace std;

class LanguageExpression{
    public:
        explicit LanguageExpression(const std::string);
        virtual ~LanguageExpression();


        virtual std::string evaluateWord(CritterLanguageContext&);
        virtual bool evaluateTone(CritterLanguageContext&);
        std::string getWord();
    private:
        std::string _word;
};
#endif