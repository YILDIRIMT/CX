#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>


#define write(WRITER) _Generic((WRITER), int : printf("%d",WRITER), char* : printf("%s",WRITER), float : printf("%f",WRITER), double : printf("%lf",WRITER), short : printf("%d",WRITER), long : printf("%ld",WRITER))
#define dell(DELLT) _Generic((DELT), int : free(DELLT), char* : free(DELLT), float : free(DELLT), double : free(DELLT), short : free(DELLT), long : free(DELLT))
#define pi M_PI

typedef char string[];


void upper(char value[])
{

int query = 0;

int upperquery = 0;


while(value[query] != '\0')
{

   if(value[query] >= 'a' && value[query] <= 'z' || value[query] >= 'A' && value[query] <= 'Z')
   {

      if(value[query] >= 'A' && value[query] <= 'Z')
      {

        value[upperquery] = value[upperquery];

	    query++;

	    upperquery++;

	    continue;

      }

        value[upperquery] = value[upperquery] - 'x' + 'X';

	    query++;

	    upperquery++;

   }

   else
   {

        value[upperquery] = value[upperquery];

	    query++;

	    upperquery++;

	    continue;

   }

}

}


void lower(char value[])
{

int query = 0;

int upperquery = 0;


   while(value[query] != '\0')
	 {

        if (value[query] >= 'A' && value[query] <= 'Z' || value[query] >= 'a' && value[query] <= 'z' )
        {

        if(value[query] >= 'a' && value[query] <= 'z')
	      {

         value[upperquery] = value[upperquery];

	     query++;

	     upperquery++;

	     continue;


        }

         value[upperquery] = value[upperquery] - 'X' + 'x';

	     query++;

	     upperquery++;

        }
        else
        {

          value[upperquery] = value[upperquery];

	      query++;

	      upperquery++;

	      continue;

        }

    }

}


void firstupper(char value[])
{


        if (value[0] >= 'a' && value[0] <= 'z')
        {
            value[0] = value[0] - 'x' + 'X';
        }
        else
        {

        value[0] = value[0];

        }

}


 void endupper(char value[])
{


int query = 0;

while(value[query] != '\0')
{



value[query] == value[query];

query++;



}


if(value[query] == '\0')
{

query--;
	
if(isupper(value[query]))
{

value[query] = value[query];

}
else
{
  value[query] = value[query] - 'x' + 'X';
}


}

}


void firstlower(char value[])
{

        if (value[0] >= 'A' && value[0] <= 'Z')
        {
            value[0] = value[0] - 'X' + 'x';
        }
        else
        {

            value[0] = value[0];

        }

}


void endlower(char value[])
{

int query = 0;

while(value[query] != '\0')
{

value[query] == value[query];

query++;

}

if(value[query] == '\0')
{

query--;

if(islower(value[query]))
{

value[query] = value[query];

}
else
{

 value[query] = value[query] - 'X' + 'x';

}


}

}


void selstr(char substr_value[],int start,int finish)
{

   int starter,query_for,nvalue_index;
   query_for = start ;


   for(starter = start, nvalue_index = 0; query_for <= finish;)
   {

   substr_value[nvalue_index] = substr_value[starter];

   nvalue_index++;
   starter++;
   query_for++;

   }

   substr_value[nvalue_index] = '\0';

}


void wrtscan(char scaning_string[], char scaned[],char result[])
{

  int number = -0;
  int numberbow = 0;

  while(scaning_string[number] != '\0')
  {



       if(scaning_string[number] == scaned[0])
       {

          result[numberbow] = scaned[0];

          numberbow++;

       }

       number++;

  }

  result[numberbow] = '\0';

}


void rtrim(char value[],char crter[],char new_value[])
{




    int c_value_lenght = strlen(value);

    char c_value[c_value_lenght];

    cover(value,c_value);

    char dell_value[] = "";

    delchr(c_value,crter,dell_value);



    char xd[100];

    cover(dell_value,xd);

    write(xd);




}


void delchr(char value[],char chr[], char result[])
{


  int query_number = 0;
  int query_content = 0;

  while(value[query_number] != '\0')
  {

      if(value[query_number] != chr[0])
      {

       result[query_content] = value[query_number];

       query_content++;

      }


      query_number++;

  }

 result[query_content] = '\0';

}

void cover(char value[])
{


 int query = 0;
 int new_query = -1;


 for(int lenght = strlen(value) ; value[query] != '\0';)
 {

  query++;
  new_query++;

  lenght--;

  value[new_query] = value[lenght];

 }



 value[new_query] = '\0';



}


double dagcrad(double dag)
{


return dag * M_PI / 180.0 ;



}


int scanvalue(char value[],char scan_value[])
{


   int reqgo = 0;
   int query = -1;
   int reqnull = 0;
   int lenght_value = 0;
   int plo = 0;

   lenght_value = lenght(scan_value);

 while(value[reqnull] != '\0')
 {

     while(value[reqnull] == scan_value[reqgo])
     {

       reqgo++;
       reqnull++;
       query++;



        if(lenght_value == query)
        {

          return 1;

        }


     }

      reqnull++;

 }


}


int lenght(char lenght_value[])
{

   int i;
   int new_value_lenght;
   i = 0;

   while(lenght_value[i] != '\0')
   {

      new_value_lenght = i;

      i++;
   }

  return new_value_lenght;

}


int scan_char(char scaning_string[],char scaned[])
{

    int i = 0;
    int j = 0;

    while(scaning_string[i] != '\0')
    {

        if(scaning_string[i] == scaned[0])
        {

            j++;

        }

        i++;
    }

    return j;

}


int square(int val1)
{

int quest = 0;
quest = val1 * val1;
return quest;


}


int positive()
{

   return 1;

}

int negative()
{

   return 0;

}


int empty(char x[])
{

if(x == '\0')
{

return 0;

}

if(x != '\0')
{

return 1;

}


}


int rnd(float value)
{

   if (value >= 0)
   {

     return value + 0.5;

   }

   else
   {

     return value - 0.5;

   }

}


int lowerfloor(float value)
{

return value - 0.5;

}


int upperfloor(float value)
{



return value + 1;




}


int main()
{

return 0;

}
