#include "Gene.h"
#include "Allele.h"
#include <iostream>

using namespace std;

Gene::Gene()
{
	this->AlleleA;
	this->AlleleB;
	this->name;
	this->traitType;
}

Gene::Gene(Allele allele1, Allele allele2)
{
	this->AlleleA = allele1;
	this->AlleleB = allele2;
}