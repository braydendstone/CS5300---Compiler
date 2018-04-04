#include "MainSpace.h"

extern int yyparse();

int main()
{
  MainSpace::setupProgram();
  yyparse();
  return 0;
};
