#ifndef PROCESSER_H
#define PROCESSER_H

#include <stdio.h>
#include <string.h>

extern char buffer[4096];
extern size_t read;


int processer(FILE *file);


#endif