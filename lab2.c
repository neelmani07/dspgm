#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[50],pat[50],rep[3],strres[50];int count;
int match(int);
void replace(int);
void main ()
{   
   printf("enter the string\n");
   fgets(str,50,stdin);
   printf("enter the pattern\n");
   fgets(pat,50,stdin);
   printf("enter the replace\n");
   fgets(rep,50,stdin);
   
   int i;
   for(i=0;str[i]!='\0';i++)
   {   //printf("%c\t%c\n",str[i],pat[0]);
       if (str[i]==pat[0])
       {
           if (match(i))
           {
               count ++;replace(i);
            }
        }
    }
    printf("replaced string=%s",strres);
}
int match(int i)
{   
    int l=strlen(pat),j;
    for (j=0;j<l-1;j++,i++)
    {
        if(str[i]!=pat[j])
        {
            return 0;
         }//printf(".n");
     }
     return 1;
}
void replace(int j)
{  
    int l=strlen(rep),k,m,n,t=(strlen(pat)+j),q=strlen(pat),u,y;
    //printf("replacing\n");printf("%d %d %d %d",q,l,t,j);
    if (count==1)
    {
    for (k=0;k<j;k++)
    {
         strres[k]=str[k];
    }printf("%s ",strres);
     for (m=0;m<l-1;m++,k++)
     {
          strres[k]=rep[m];
     }printf("%s ",strres);strres[k]=' ';k++;
     for (n=j+q;n<50;n++,k++)
     {
          printf(".");
          strres[k]=str[n];
     }printf("%s",strres);
     }
    / else
     {
         for(u=0;u<l-1;u++,j++)
         {
             strres[j]=rep[u];//printf("%c\t",strres[j]);
         
             }printf("%s",strres);strres[j]=' ';j++;
          for(y=j+l;y<50;y++,j++)
         {
             strres[j]=strres[y];
         
             }printf("%s",strres);
          









      }
}


     
