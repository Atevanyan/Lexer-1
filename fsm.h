#pragma once

#ifndef FSM_H_
#define FSM_H_

#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
using namespace std;

struct Token
{
    string LexemeName;
    int TokenType;
    string TokenName;
};

vector<Token> lexicalAnalyzer(char*);

bool isKeyword(string);

bool isOperator(string);

bool isSeparator(string);

bool Unknown(char);

Token Id_int_real_helper(int, string);

Token Sep_Op_helper(string);

bool isPunct(int);

int GetCol(char);

string getTokenName(int, string);

#endif