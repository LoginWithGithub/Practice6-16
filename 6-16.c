#include <stdio.h>

#define Interest_rate 0.08
#define  MON 10.0
#define BASE 100.0

int main(void)
{
	double money = BASE;
	int age = 0;
	
	while(money > 0)
	{
		money = money * (1 + Interest_rate) - MON;
		if(money < 0)
		money = 0;
		age++;
		printf("%2d years:%lf\n", age, money);
	}
	printf("%d年后Chuckie的账户被清空。",age);

    system("PAUSE");
	return 0;
}
