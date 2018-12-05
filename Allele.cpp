#include <iostream>
#include "Allele.h"
#include <string>

using namespace std;

Allele::Allele()
{
	this->nucleotideSequence = "";
	this->variantName = "";
	this->variantType = "";
}

Allele::Allele(string nucleotideSquence, string variantName, string variantType)
{
	this->nucleotideSequence = nucleotideSquence;
	this->variantName = variantName;
	this->variantType = variantType;
}

string Allele::getName()
{
	return variantName;
}

void Allele::setName(string newName)
{
	variantName = newName;
}
