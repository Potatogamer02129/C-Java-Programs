#include <stdio.h>

void CheckAnagram(char str1[],char str2[]);

int main(){
char str1[50],str2[50];
printf("Enter a word to check for Anagram: ");
scanf("%s",str1);
printf("Enter second word to check for Anagram: ");
scanf("%s",str2);
CheckAnagram(str1,str2);
}

void CheckAnagram(char str1[],char str2[]){
int i,j,strlen1=0,strlen2=0;
while(str1[strlen1]!='\0'){
    strlen1++
}
while(str1[strlen2]!='\0'){
    strlen2++
}
if(strlen1!=strlen2){
    printf("They are not Anagrams");
}
else{
    
}
}