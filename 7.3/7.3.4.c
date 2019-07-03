#include<stdio.h>
int main(){
    int Murderer;
    for(Murderer = 'A'; Murderer <= 'D'; Murderer++){
        if((Murderer != 'A') + (Murderer == 'C') + (Murderer == 'D') + (Murderer != 'D') == 3){
            printf("Murderer = %c\n", Murderer);
        }
    }
    return 0;
}
