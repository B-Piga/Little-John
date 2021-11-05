#include <stdio.h>

int main(){
    int novo, zero, falso, start, a, b;

    scanf("%d", &novo);


    scanf("%d", &zero);


    scanf("%d", &falso);





    int buffer = zero * 2 + 1;




    int res[buffer];


    start = falso - zero;



    b = start;





    for(a=0; a < buffer; a++){


        res[a] = b;


        b++;


    }

    for(a=0; a < buffer; a++){



        if ((a < buffer) && (a > 0)){


            printf("-");


        }


        if ((res[a] < 0) || (res[a] > novo + 1 ) ){



            printf("[]");




        }

        else if(res[a] == falso){



            printf("{%d}", falso);



        }




        else if(res[a] == 0){


            printf("[BOV]");




        }





        else if(res[a] == novo + 1){


            printf("[EOV]");




        }

        else{


            printf("[%d]", res[a]);

        }

    }

    
}