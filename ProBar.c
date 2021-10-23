#include"ProBar.h"


void ProcessBar()
{
  char bar[NUM];
  memset(bar,'\0',sizeof(bar));
  const char* str ="|/-\\";
  int i = 0;
  while(i <= 100)
  {
    printf("[%-100s][%d%%][%c]\r",bar,i,str[i%4]);
    fflush(stdout);
    bar[i++] = '#'; 
    usleep(100000);
  }
  printf("\n");
}
