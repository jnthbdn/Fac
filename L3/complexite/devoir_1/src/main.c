#include <stdio.h>
#include "utils.h"
#include "insertseq.h"

int main( int argc, char** argv )
{
    (void) argc;
    (void) argv;
    printf( "TODO:\
            \n\t1. Tri par insertion séquentieli **TEST**\
            \n\t2. Tri par insertion dichotomique\
            \n\t3. Tri par selection-permutation\
            \n\t4. Tri à bulle\
            \n\t5. Tri par fusion\
            \n\t6. Tri rapide (QuickSort)\
            \n\t7. Tri à l'aide d'arbre binaire de recherche\
            \n\t8. Tri par tas\
            \n\n\nAu BOULOT !!!!!\n\n" );
    
    int t[5] = {21, 8, 4, 61, 384};
    insertionSequentielle( t, 5 );

    return 0;
}