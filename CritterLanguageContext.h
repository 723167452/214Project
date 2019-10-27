/**
 *  @file CritterLanguageContext.h
 *  @class CritterLanguageContext
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef CRITTERLANGUAGECONTEXT_H
#define CRITTERLANGUAGECONTEXT_H

#include <map>
#include <string>
using namespace std;
class CritterLanguageContext{
    public:
        explicit CritterLanguageContext();
        virtual ~CritterLanguageContext();

        string lookupCritterWord(const std::string) const;
        bool lookupCritterWordTone(const std::string) const;
        void assignWordTranslation(string,string, bool);
        
    private:
        std::map<std::string, std::string> _wordTranslation;
        std::map<std::string, bool> _wordTone;
};
#endif