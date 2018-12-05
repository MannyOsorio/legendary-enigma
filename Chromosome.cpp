#include <iostream>
#include "Chromosome.h"

using namespace std;

Allele a(string trait, string sequence);
Allele b(string trait, string sequence);

Gene g(Allele a, Allele b);

ChromosomePair c;
//c.addGene(g);