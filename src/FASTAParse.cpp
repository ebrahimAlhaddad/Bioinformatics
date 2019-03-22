//
//  FASTAParse.cpp
//  main
//
//  Created by Ebrahim Alhaddad on 9/25/18.
//

#include "FASTAParse.h"

FASTAParse::FASTAParse(const std::string &inputDir){
    
    std::ifstream iFile(inputDir, std::ios::in | std::ios::ate);
    char iChar;
    if(iFile.is_open()){
        std::streampos fileSize = iFile.tellg();
        mSequence.reserve(fileSize);
        iFile.seekg(0,std::ios::beg);
        iFile.get(iChar);
        //store header
        if(iChar == '>'){
            iFile.get(iChar);
            while(iChar != '\n'){
                mHeader += iChar;
                iFile.get(iChar);
            }
            //buffer new line character
            iFile.get(iChar);
            //store sequence
            while(!iFile.eof()){
                if(iChar != '\n')
                    mSequence += iChar;
                iFile.get(iChar);
            }
        }
        
    }
    iFile.close();
    
    
};
