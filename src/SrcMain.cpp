#include "SrcMain.h"
#include "FASTAParse.h"
#include <iostream>
#include "DNATranslator.h"
#include "SequenceAlignment.h"
void ProcessCommandArgs(int argc, const char* argv[])
{
	// TODO
    
    if(argc == 2){
        FASTAParse* reader = new FASTAParse(argv[1]);
        DNATranslator translator = DNATranslator(reader);
        translator.translateDNA();
    }
    else if(argc == 3){
        std::string f1 = argv[1];
        std::string f2 = argv[2];
        SequenceAlignment test(f1,f2);
        test.processGenes();
        test.createFile();
    }
}


