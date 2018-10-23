/***************************************************************************
 *   Copyright (C) $Year$ by $Author: e1401472 $   *
 *   e1401472@edu.vamk.fi   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

/*********************************************************************
*
* 1.  NAME
*     linkedlist.h
* 2.  DESCRIPTION
*     Template for c files
*     
* 3.  VERSIONS
*       Original:
*         $Date 23.10.2018 $/ $Author: e1401472 $
*
*       Version history:
*       $Log$
*
**********************************************************************/

/*-------------------------------------------------------------------*
*    HEADER FILES                                                    *
*--------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <gtest/gtest.h>

/*-------------------------------------------------------------------*
*    GLOBAL VARIABLES                                                *
*--------------------------------------------------------------------*/
/* Control flags */
/* Global constants */
/* Global variables */

/* Global structures */
typedef struct linked_list linked_list;

struct linked_list{
char *data;
int index; /* normally not used with Linked Lists, just for exercise */
struct linked_list *next;
};

/*-------------------------------------------------------------------*
*    FUNCTION PROTOTYPES                                             *
*--------------------------------------------------------------------*/
/*********************************************************************
*    MAIN PROGRAM                                                      *
**********************************************************************/

int add_to_list(linked_list *ll, char *s);
int display_item(linked_list *ll);
int display_list(linked_list *ll);
linked_list * search_from_list(linked_list *ll, char *s);
int delete_from_list(linked_list *ll, int index);
/*Extra functions*/
int empty_list(linked_list *ll);
int swap_items(linked_list *f, linked_list *s);
int sort_list(linked_list *ll);
int linkedlist_status(linked_list *ll);

