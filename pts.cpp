/*
 * =====================================================================================
 *
 *       Filename:  pts.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  09/22/2017 08:47:43 AM
 *  Last Modified:  2020-12-26 14:57:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zt (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/fcntl.h>


int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;
  int fd = open ( "/dev/pts/0", O_RDWR );

  write ( fd, "test!!!", 6 );

  close ( fd );

  return 0;
}

