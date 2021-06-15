/*
 *
 * drivemap.c
 * Wednesday, 5/13/1998.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <GnuType.h>
#include <GnuDir.h>


int main (int argc, char *argv[])
   {
   UINT  i;
   ULONG ulDrives;

   ulDrives = DirGetDriveMap ();

   for (i=0; i<26; i++)
      if ((ulDrives >> i) & 1)
         printf ("%c ", i + 'A');
   return 0;
   }
