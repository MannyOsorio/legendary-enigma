#pragma once
#include "Allele.h"
#include <iostream>

using namespace std;

class Gene
{
  private:
	Allele AlleleA;
	Allele AlleleB;
	string name;
	string traitType;

  public:
	Gene();
	Gene(Allele allele1, Allele allele2);
	Allele GetExpressedTrait();

	void WriteToFile(ofstream &);
	bool RunUnitTests();
};