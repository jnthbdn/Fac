#ifndef __ARBREAVL_H__
#define __ARBREAVL_H__

#include <vector>

/**
 * \class TreeAVL __ARBREAVL_H__ arbreavl.h
 * \brief Structure minimal d'un arbre AVL
 **/
template< typename T > 
class TreeAVL
{
    public:
        /**
         * \fn TreeAVL( T value, TreeAVL parent, TreeAVL left, TreeAVL right )
         * \brief Créé une structure d'arbre AVL avec une valeur et une branche gauche
         * \param value Valeur attribuée à la structure
         * \param parent Arbre parent du nouvel arbre
         * \param left Arbre enfant positionné à gauche
         * \param right Arbre enfant positionné à droite
         **/
        TreeAVL( T value, TreeAVL * parent = NULL, TreeAVL * left = NULL, TreeAVL * right = NULL);

        /**
         * \fn ~TreeAVL()
         * \brief Destructeur de la classe
         **/
        virtual ~TreeAVL();

        /**
         * \fn int getLevel()
         * \brief Accesseur à la donnée membre level
         * \return Un entier représentant la hauteur de l'arbre
         **/
        int getLevel();

        /**
         * \fn bool contains( T val )
         * \brief Recherche la présence d'un élément dans l'arbre
         * \param val Valeur à rechercher
         * \return TRUE si l'élément est dans l'arbre, FALSE dans le cas
         * contraire
         **/
        bool contains( T val );

        /**
         * \fn void insert( T val )
         * \brief Ajoute un élément dans l'arbre
         * \param val Valeur à ajouter
         **/
        void insert( T val );
        
        /**
         * \fn void afficher()
         * \brief Affiche l'arbre sur la sortie standard formaté en DOT
         **/
        void affiche();
        
        T value;           ///< Valeur de la noeud
        TreeAVL * left;    ///< Arbre enfant positionné à droite
        TreeAVL * right;   ///< Arbre enfant positionné à gauche
        TreeAVL * parent;  ///< Noeud parent

    private:
        int level;  ///< Hauteur du noeud

        /**
         * \fn int updateLevel()
         * \brief Calcule le niveau du noeud
         **/
        int updateLevel();
};

#include "treeavl.hpp"

#endif
