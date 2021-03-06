#include <stdio.h>
#include "scanflib.h"

#define ITEM_HILFE  0
#define ITEM_KOM1   1
#define ITEM_KOM2   2
#define ITEM_KOM3   3
#define ITEM_KOM4   4
#define ITEM_KOM5   5
#define ITEM_KOM6   6
#define ITEM_KOM7   7
#define ITEM_KOM8   8
#define ITEM_KOM9   9
#define ITEM_KOM10  10
#define ITEM_KOM11  11
#define ITEM_KOM12  12
#define ITEM_KOM13  13
#define ITEM_KOM14  14
#define ITEM_KOM15  15
#define ITEM_KOM16  16
#define ITEM_ENDE   99



char * komMenu[]={"\n 0\tHilfetext\n",
                  " 1\t1.Kommando\n",
                  " 2\t2.Kommando\n",
                  " 3\t3.Kommando\n",
                  " 4\t4.Tim Schneider\n",
		         " 5\t5.Alexander Tröger\n",
		         " 6\t6.Tim Weber\n",
                " 7\t7.David Holzapfel\n",
		        " 9\t9.David Berres\n",
                " 10\t10. Jorin Spiller\n",
                  " 11\t11. Isabelle Müller\n",
                  " 12\t12. Maurice Faber\n",
                  " 13\t13. Nils Schneider\n",
                  " 14\t14. Marius Steffens\n",
                  " 15\t15. Marcel Hesselbach\n",
                " 16\t16. Martin Harasch\n",
				" 17\t17. Julian Klotz\n",
                  " 99\a\tEnde\n"};

int steuerMenu(void);

int main(int argc, char* argv[])
  {
  return steuerMenu();
  }  
				  
int steuerMenu()
  {
  int kommando = 1;
  int end = (sizeof(komMenu)/sizeof(char *));
  do{ 
    for (int i=0; i<(sizeof(komMenu)/sizeof(char *)); i++)
      {
      printf("%s",komMenu[i]);
      }
    printf("$:");
	if (readInteger(&kommando)!=NO_ERROR)
	  {
	  printf("keine Zahl");
	  }
	  
    switch (kommando)
      {
      case  ITEM_HILFE:  printf("%s",komMenu[ITEM_HILFE]);
                         break;
      case  ITEM_KOM1:   printf("%s",komMenu[ITEM_KOM1]);
                         break;
      case  ITEM_KOM2:   printf("%s",komMenu[ITEM_KOM2]);
                         break;
      case  ITEM_KOM3:   printf("%s",komMenu[ITEM_KOM3]);
                         break;
      case  ITEM_KOM4:   printf("%s",komMenu[ITEM_KOM4]);
                         break;
      case ITEM_KOM5:  printf("%s",komMenu[ITEM_KOM5]);
                        break;
      case ITEM_KOM6:  printf("%s",komMenu[ITEM_KOM6]);
			            break;
      case ITEM_KOM7:  printf("%s",komMenu[ITEM_KOM7]);
			             break;
      case  ITEM_KOM8:   printf("%s",komMenu[ITEM_KOM8]);
                         break;
      case ITEM_KOM9:  printf("%s",komMenu[ITEM_KOM9]);
                        break;
      case ITEM_KOM10:  printf("%s",komMenu[ITEM_KOM10]);
                        break;
      case ITEM_KOM11:  printf("%s",komMenu[ITEM_KOM11]);
                        break;
       case ITEM_KOM12:  printf("%s",komMenu[ITEM_KOM12]);
                        break;
        case ITEM_KOM13:  printf("%s",komMenu[ITEM_KOM13]);
              break;
          case ITEM_KOM14:  printf("%s",komMenu[ITEM_KOM14]);
              break;
          case ITEM_KOM15:  printf("%s",komMenu[ITEM_KOM15]);
              break;
        case ITEM_KOM16:  printf("%s",komMenu[ITEM_KOM16]);
              break;
      case  ITEM_ENDE:   printf("%s",komMenu[end-1]);
                         break;
      default: printf("\nkein Kommando\n");
      }
    }while(kommando!=ITEM_ENDE);
   
    return(0);
  }
