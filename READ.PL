#!/usr/bin/perl
#
# read.pl
# Wednesday, 5/13/1998.
#
#

   `drivemap.exe >drivemap.dat`;
   open (IN, "<drivemap.dat");
   @Drives = split (" ", <IN>);
   close IN;
   print join (",", @Drives);
