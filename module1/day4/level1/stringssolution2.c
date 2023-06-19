//convert string as integer
#include<stdio.h>
#include<string.h>

int convertstring(char str[]){
    int res = 0;
    for(int i = 0; str[i] != '\0'; i++){
        res = res*10+(str[i] - '0');
    }
    
    return res;
}
 
int main(){
    
    char str[100];
    
    printf("Enter the string :");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str, "\n")] = '\0';      
    
    int res = convertstring(str);
    
    printf("string converted inti integer:%d\n",res);
    
    return 0;
}
