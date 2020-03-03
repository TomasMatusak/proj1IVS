
//======== Copyright (c) 2020, FIT VUT Brno, All rights reserved. ============//
//
// Purpose:     Test Driven Development - priority queue code
//
// $NoKeywords: $ivs_project_1 $tdd_code.cpp
// $Author:     TOMAS MATUSAK <xmatus34@stud.fit.vutbr.cz>
// $Date:       $2020-03-01
//============================================================================//
/**
 * @file tdd_code.cpp
 * @author TOMAS MATUSAK
 * 
 * @brief Implementace metod tridy prioritni fronty.
 */

#include <stdlib.h>
#include <stdio.h>

#include "tdd_code.h"

//============================================================================//
// ** ZDE DOPLNTE IMPLEMENTACI **
//
// Zde doplnte implementaci verejneho rozhrani prioritni fronty (Priority Queue)
// 1. Verejne rozhrani fronty specifikovane v: tdd_code.h (sekce "public:")
//    - Konstruktor (PriorityQueue()), Destruktor (~PriorityQueue())
//    - Metody Insert/Remove/Find a GetHead
//    - Pripadne vase metody definovane v tdd_code.h (sekce "protected:")
//
// Cilem je dosahnout plne funkcni implementace prioritni fronty implementovane
// pomoci tzv. "double-linked list", ktera bude splnovat dodane testy 
// (tdd_tests.cpp).
//============================================================================//

PriorityQueue::PriorityQueue()
{
  /*  struct Element_t* node = new Element_t;
    node->pNext = NULL;
    node->pPrev = NULL;*/
}

PriorityQueue::~PriorityQueue()
{
   // delete node;

}

void PriorityQueue::Insert(int value)
{   
   /* struct Element_t* node = new Element_t;
    
    if (root->pNext == NULL) {
        node->pNext = NULL;
        node->pNext = NULL;
        node->value = value;
        root->pNext = node;
    }
    if (Find(value)->value == value) {
        
    }
    if (Find(value) ==NULL && root->pNext != NULL) {
        if(Find(value))
        node->pNext = node;
        node->pPrev = NULL;
        node->pNext = NULL;
        node->pPrev = node;*/
    }
    
    
 /*   //assign data to new node
    node->value = value;
//new node is head and previous is null, since we are adding at the front
    

    //previous of head is new node
    if ((*head) != NULL)
        (*head)->prev = newNode;

    //head points to new node
    (*head) = newNode;*/
}

bool PriorityQueue::Remove(int value)
{
    return false;
}

PriorityQueue::Element_t *PriorityQueue::Find(int value)
{
  /*  if (root->pNext != NULL) {
        do {
            if (node->value == value) {
                return Element_t;
            }
            else {
                return NULL;
            }
        } 
        while (node->pNext!=NULL);
    }
    else
    return NULL;*/
}

PriorityQueue::Element_t *PriorityQueue::GetHead()
{
   // return NULL;
}

/*** Konec souboru tdd_code.cpp ***/
