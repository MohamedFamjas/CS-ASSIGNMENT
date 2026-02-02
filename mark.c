#include <stdio.h>
int main() 
{
    int m,p,c,total,mathphy_total;
    printf("Enter marks for Math, Physics, and Chemistry: ");
    scanf("%d %d %d", &m, &p, &c);
    total = m + p + c;
    mathphy_total = m + p;
    if (m >= 60 && p >= 50 && c >= 40 && (total >= 200 || mathphy_total >= 150)) 
    {
        printf("The candidate is ELIGIBLE for admission.\n");
    } 
    else 
    {
        printf("The candidate is NOT ELIGIBLE for admission.\n");
    }

    return 0;
}
