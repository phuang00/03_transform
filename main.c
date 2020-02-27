#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct matrix * transform;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);


  transform = make_translate(2,3,4);
  print_matrix(transform);
  transform = make_scale(2,3,4);
  printf("\n");
  print_matrix(transform);
  transform = make_rotZ(0);
  printf("\n");
  print_matrix(transform);
  transform = make_rotX(0.5);
  printf("\n");
  print_matrix(transform);
  transform = make_rotY(0.5);
  printf("\n");
  print_matrix(transform);

  // if ( argc == 2 )
  //   parse_file( argv[1], transform, edges, s );
  // else
  //   parse_file( "stdin", transform, edges, s );
  //
  free_matrix( edges );
  free_matrix( transform );
}
