
void delay(void)
{
	int i,j ,k= 0;
	
	for(j = 10000; j >= 0; j--)
	{
		for(i = 10000; i >= 0; i--);
		{
			k = 0;
		}
	}
}

int main(void)
{
	unsigned char i = 0;
	unsigned char LED[3] = {0,1,5};
	*(unsigned int *)0x40021018 |=  (1<<3);
	i = 0;
	*(unsigned int *)0x40010C00 |= (1<<(4*LED[i]));
	*(unsigned int *)0x40010C0C &= ~(1<<LED[i]);
  
	*(unsigned int *)0x40010C00 = 1;
	*(unsigned int *)0x40010C0C = 1;
//	i = 1;
//	*(unsigned int *)0x40010C00 |= (1<<(4*LED[i]));
//	*(unsigned int *)0x40010C0C &= ~(1<<LED[i]);
//    delay();
	i = 2;
	*(unsigned int *)0x40010C00 |= (1<<(4*LED[i]));
	*(unsigned int *)0x40010C0C &= ~(1<<LED[i]);
//   delay();
//	*(unsigned int *)0x40010C00 = 0;
//	*(unsigned int *)0x40010C0C = 0;
}


void SystemInit()
{
	
}
