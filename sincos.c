//Fullname : Akzharkyn Duldul
//Nickname: White 
//Group : 3EN04B
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 #include <string.h>

int main(int argc, char*argv[]){
    if(argc == 2){
        char * n = argv[1];
        double number = atof(n);
        printf("%lf \n" , sin(number));
        printf("%lf" , cos(number));    
    }
    if(argc == 3){
        char *n = argv[1];
        if(strcmp("-s", n) == 0){
            char * num = argv[2];
            double number = atof(num);
            printf("%lf \n", sin(number));        
        }    
        if(strcmp("-c", n) == 0){
            char * num = argv[2];
            double number = atof(num);
            printf("%lf \n", cos(number));        
        }    
    }
    if(argc == 1){
        char *instruction = "usage: sincos angle \n only sine: sincos -s angle \n only cosine: sincos -c angle \n";
        printf("%s", instruction);    
    }
    return 0;
}
