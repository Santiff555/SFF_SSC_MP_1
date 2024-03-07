/*
 * Metodología de la Programación: Kmer0
 * Curso 2023/2024
 */

/** 
 * @file Kmer.cpp
 * @author Silvia Acid Carrillo <acid@decsai.ugr.es>
 * @author Andrés Cano Utrera <acu@decsai.ugr.es>
 * @author Luis Castillo Vidal <L.Castillo@decsai.ugr.es>
 * @author Javier Martínez Baena <jbaena@ugr.es>
 * 
 * Created on 24 October 2023, 14:00
 */

#include "../include/Kmer.h"

Kmer::Kmer(int k)
{
    for(int i = 0; i < k; i++)
    {
        _text[i] = MISSING_NUCLEOTIDE;
    }
}

Kmer::Kmer(const std::string& text)
{
    for(int i = 0; i < text.size(); i++)
    {
        _text[i] = text[i];
    }
}
