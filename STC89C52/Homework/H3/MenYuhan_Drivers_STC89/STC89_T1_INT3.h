/**********************************T1初始化*********************************/
void T1_Init(uint timer1_long)
{
//	EA = 1;
	ET1 = 1;
//	TMOD = 0X10;
	TH1 = (65536 - timer1_long) / 256;
	TL1 = (65536 - timer1_long) % 256;
//	TR1 = 1;
}
/**********************************功能定义**********************************/
void T1_INT_Func()
{

}
/************************************中断************************************/
void T1_INT() interrupt 3
{
	/*****开始修改定时的时长*****/
	uint time_long1;
	time_long1 = 50000;
	/*****结束修改定时的时长*****/

	/*****开始装载定时的时长*****/
	TH1 = (65536 - time_long1) / 256;
	TL1 = (65536 - time_long1) % 256;
	/*****结束装载定时的时长*****/
	T1_INT_Func();
}
