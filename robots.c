#include <stdio.h>

int main(void){
    int i;
    int robots, height, weight, power, resistance, totalPower, individualRobot, sum = 0;

    printf("input the number of robots: \n");
    scanf("%d",&robots);
    for (i = 0;i < robots; i++)
    {
        do
        {
        printf("insert the height in Metros: \n");
        scanf("%d", &height);
        }
        while (height < 1 || height > 5);
        do
        {
            printf("insert the weight in Kg: \n");
        scanf("%d",&weight);
        }
        while (weight < 1 || weight > 200);
        do
        {
          printf("insert the power of the engines: \n");
        scanf("%d", &power);
        }
        while (power < 1 || power > 5);
        do
        {
             printf("insert the resistance rating\n");
        scanf("%d", &resistance);
        }
        while ( resistance < 1 || resistance > 3);
        individualRobot = (power + resistance)*(weight - height);
        sum = sum + individualRobot;

    }
    totalPower = sum;
    printf("The total power of your robots is %d\n", totalPower);
    return 0;
}
