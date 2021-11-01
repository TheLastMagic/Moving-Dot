#pragma once

#include <iostream>
#include "ErrorStruct.h"

using namespace std;

#ifndef _WRITE_H
#define _WRITE_H

void InitErrorWritning();

void WriteError(const string error) {
    cout << error << endl;
}

#endif