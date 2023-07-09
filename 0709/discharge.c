#include <stdio.h>

#define LOWER 0   /* 温度表的上限 */
#define UPPER 300 /* 温度表的下限 */
#define STEP  20  /* 递进步长 */

/*打印摄氏度与华式温度转换表*/
main()
{
    int fahr;
    printf("转换摄氏度与华式温度\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    } 
}