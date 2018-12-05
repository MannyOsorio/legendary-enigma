/*	Project:    'Gene Sequencer' Project #5
	Name:       Manny Osorio
    Partner:    None
    Class:      CSC 1810 - Section 3
*/

#include <iostream>
#include <string>
#include <fstream>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"

using namespace std;

void userMenu()
{
	cout << "1 - Create a Chromosome" << endl;
	cout << "2 - Analyze a Chromosome" << endl;
	cout << "3 - Output a Chromosome to a file" << endl;
	cout << "4 - Input a Chromosome to a file" << endl;
	cout << "5 - Combine Chromosomes" << endl;
	cout << "6 - Exit" << endl;

	cout << "Please enter your choice" << endl;
}

void userMenuAccessFunction()
{
	int userChoice;

	userMenu();

	cin >> userChoice;
	cout << endl;

	while ((userChoice >= 1) && (userChoice <= 6))
	{
		switch (userChoice)
		{
		case 1:
			cout << "Chromosome will be/is created." << endl; //Chromosome data is created here, though it should technically be created using Chromosome.h and Chromosome.cpp where the data is 'stored'
			cin.clear();
			cin.ignore(1000, '\n');
			cout << endl;

			char moreGenes;

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

				cout << "Would you like to add a new gene? (y/n)" << endl;
				cin >> moreGenes;

			} while (moreGenes == 'y');

			cout << "Please enter your choice (1-6)" << endl;
			cin >> userChoice;
			cout << endl;
			break;

		case 2:
			cout << "Chromosome will be/is analyzed." << endl; //Value of Chromosome would be returned and analyzed here.
			cin.clear();
			cin.ignore(1000, '\n');
			cout << endl;

			cout << "Please enter your choice (1-6)" << endl;
			cin >> userChoice;
			cout << endl;
			break;

		case 3:
			cout << "Chromosome will be output/is output to a file." << endl; //In Chromosome.h, the ifstream/ofstream objects write and output the files to separate text file.
			cin.clear();
			cin.ignore(1000, '\n');
			cout << endl;

			cout << "Please enter your choice (1-6)" << endl;
			cin >> userChoice;
			cout << endl;
			break;

		case 4:
			cout << "Chromosome has been input/will be input." << endl; //Validation using POST or power on self tests to see if data has actually been input.
			cin.clear();
			cin.ignore(1000, '\n');
			cout << endl;

			cout << "Please enter your choice (1-6)" << endl;
			cin >> userChoice;
			cout << endl;
			break;

		case 5:
			cout << "Chromosomes will be combined/is in the process of combination." << endl; //Demeiosis in GeneSequencer returns chrommosome with x and y genes in a process of randomized combination.
			cin.clear();
			cin.ignore(1000, '\n');
			cout << endl;

			cout << "Please enter your choice (1-6)" << endl;
			cin >> userChoice;
			cout << endl;
			break;

		case 6:
			cout << "Goodbye!" << endl; //case 6 is just a simple exit case.
			cin.clear();
			cin.ignore(1000, '\n');
			exit(EXIT_SUCCESS);
			break;
		}
	}
}

int main(int argc, char *argv[])
{

	ChromosomePair c;

	userMenuAccessFunction();

	Allele myAllele;
	myAllele.setName("XYX");
	cout << myAllele.getName() << endl;

	cout << "Hello, world." << endl;

	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}