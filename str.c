#include<stdio.h>
int str_len1(char *s){
   int i=0;
   while(s[i]!='\0')
       i++;
   return i;
}
void upprcase(char *s){
   int i;
   for(i=0;s[i]!='\0';i++){
       if(s[i]>=97&&s[i]<=122)
           s[i]=s[i]-32;
   }
}
void lowercase(char *s){
   int i;
   for(i=0;s[i]!='\0';i++){
      if(s[i]<97)
          s[i]=s[i]+32;
   }
}
void rev(char *str)
{
   char *str1,temp;
   str1=str;
   while(*str1!='\0'){
       str1++;
   }
   str1--;
   while(str<str1){
       temp=*str;
       *str=*str1;
       *str1=temp;
       str++;
       str1--;
   }
}
void str_cpy(char *ptr1,char *ptr2){
   while(*ptr1!='\0'){
       *ptr2=*ptr1;
       *ptr1++;
       *ptr2++;
   }
   *ptr2='\0';
}
void cncat(char *str1,char *str2){
   int i=0,j=0;
   while(str1[i]!='\0')
       i++;
   while(str2[j]!='\0'){
       str1[i]=str2[j];
       j++;
       i++;
  }
  str1[i]='\0';
}
int main(){
   int len,choice;
   char str1[30],str2[30];
   while(1){
       printf("Enter 1 to find length\n,2 to copy\n,3 to cnvrt into upper\n,4 to cncat\n,5 to cnvrt into lower\n,6 to reverse\n,7 to exit\n");
       scanf("%d",&choice);
       switch(choice){
       case 1:
           printf("Enter the string\n");
           scanf("%s",str1);
           len=str_len1(str1);
           printf("String length is %d\n",len);
           break;
       case 2:
           printf("Enter a string\n");
           scanf("%s",str1);
           str_cpy(str1,str2);
           printf("Copied string is %s\n",str2);
           break;
       case 3:
           printf("Enter a string\n");
           scanf("%s",str1);
           upprcase(str1);
           printf("The uppercase string is: %s\n",str1);
           break;
       case 4:
           printf("Enter First String:\n");
           scanf("%s",str1);
           printf("Enter Second String:\n");
           scanf("%s",str2);
           cncat(str1,str2);
           printf("Concatenated String is %s\n",str1);
           break;
       case 5:
           printf("Enter a string\n");
           scanf("%s",str1);
           lowercase(str1);
           printf("The lowercase string is: %s\n",str1);
           break;
       case 6:
           printf("Enter a string\n");
           scanf("%s",str1);
           rev(str1);
           printf("The reversed string is: %s\n",str1);
           break;
       case 7:
           exit(0);
       }
   }
   return 0;
}

