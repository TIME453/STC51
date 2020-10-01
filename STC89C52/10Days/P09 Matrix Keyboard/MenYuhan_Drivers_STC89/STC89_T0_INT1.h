/**********************************T0初始化*********************************/
void T0_Init(uint timer0_long)
{
//	EA = 1;
	ET0 = 1;
//	TMOD = 0X01;
	TH0 = (65536 - timer0_long) / 256;
	TL0 = (65536 - timer0_long) % 256;
//	TR0 = 1;
}
/**********************************功能定义**********************************/
void T0_INT_Func()
{

}
/************************************中断************************************/
void T0_INT() interrupt 1
{
	/*****修改定时的时长*****/
	uint time_long0;	
	time_long0 = 50000; 
	/*****装载定时的时长*****/
	TH0 = (65536 - time_long0) / 256;
	TL0 = (65536 - time_long0) % 256;
	/*****中断功能*****/
	T0_INT_Func();
}