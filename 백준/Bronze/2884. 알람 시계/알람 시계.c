#include <stdio.h>

int main()
{
    int hour, minute;
    
    scanf("%d %d", &hour, &minute);
    if(minute<45){
    	hour -= 1;
    	if(hour<0) hour+=24;
    	minute-=45;
    	minute+=60;
	}
	else minute -= 45;
    printf("%d %d", hour, minute);
    
    return 0;
}