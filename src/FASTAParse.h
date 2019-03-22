//
//  FASTAParse.h
//  pa3
//
//  Created by Ebrahim Alhaddad on 9/25/18.
//

//#include <stdio>
#include <fstream>
#include <iostream>
#include <string>
#pragma once


class FASTAParse {
public:
    std::string mHeader;
    std::string mSequence;
    FASTAParse(const std::string &inputDir);
};
