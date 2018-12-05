#include <iostream>
#include "GeneSequencer.h"

using namespace std;

/*ChromosomePair GeneSequencer::CreateChromosomePair()
{

	char moreGenes = 'n';
	ChromosomePair newChromosome;

	do
	{
		string name;
		string trait;
		string type;
		string sequence;
		string variant;

		cout << "What is the gene name? (e.g. TZ458)";
		cin >> name;
		cout << "What is the gene trait? (e.g. eye color)";
		cin >> trait;
		cout << "What is allele 1 variant? (e.g. blue/brown/etc.)";
		cin >> variant;
		cout << "What is allele 1 Type? (e.g. dominant/recessive)";
		cin >> type;
		cout << "What is allele 1 nucleotide sequence? (e.g. AGTC)";
		cin >> sequence;
		Allele alleleA(variant, type, sequence);

		cout << "What is allele 2 variant? (e.g. blue/brown/etc.)";
		cin >> variant;
		cout << "What is allele 2 Type? (e.g. dominant/recessive)";
		cin >> type;
		cout << "What is allele 2 nucleotide sequence? (e.g. AGTC)";
		cin >> sequence;
		Allele alleleB(variant, type, sequence);

		Gene newGene(alleleA, alleleB);

		newChromosome.AddGene(newGene);

		cout << "Would you like to add a new gene? (y/n)" << endl;
		cin >> moreGenes;

	} while (moreGenes == 'y');

	return newChromosome;*/

