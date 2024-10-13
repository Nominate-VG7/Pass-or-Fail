#include <stdio.h>

int main()
{
    int physics, chemistry, maths;

    printf("enter physics marks: ");
    scanf("%d", &physics);

    printf("enter chemistry marks: ");
    scanf("%d", &chemistry);

    printf("enter maths marks: ");
    scanf("%d", &maths);

    float total;

    total = (physics + chemistry + maths)/3;
    
    if((total<40) || chemistry<33 || physics<33 || maths<33){
        printf("your total percentage is %f and you are fail", total);
    }
    else{
        printf("your total percentaage is %f and you are pass", total);
    }

    return 0;
}