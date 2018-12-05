#pragma once
#include <iostream>

using namespace std;

class Allele
{
  private:
	string nucleotideSequence;
	string variantName;
	string variantType;

  public:
	Allele();
	Allele(string nucleotide, string variantName, string variantType);

	string getName();
	void setName(string newName);

	void WriteAlleleToFile(ofstream);
	bool RunUnitTests();
};