//
//  DNATranslator.h
//  pa3
//
//  Created by Ebrahim Alhaddad on 9/25/18.
//

#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include "FASTAParse.h"


class DNATranslator {
private:
    FASTAParse* mFASTAData;
    int mStateGraph[21][4];
    int totalAmino;
public:
    std::map<char, unsigned int> mAminoCount;
    DNATranslator(FASTAParse *inData);
    void translateDNA();
    void printAmino();
};
