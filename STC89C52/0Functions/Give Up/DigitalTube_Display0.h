sbit wx = P2 ^ 7;
sbit dx = P2 ^ 6;

uchar code duanxuan[] = { 0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,
0x77,0x7c,0x39,0x5e,0x79,0x71 };
uchar code weixuan[] = { 0xfe,0xfd,0xfb,0xf7,0xef,0xdf };

void DigitalTube_Display0(uchar one, uchar two, uchar three, uchar four, uchar five, uchar six)
{
	dx = 1;
	P0 = duanxuan[one];   //送段数据
	dx = 0;
	P0 = 0xff;		//送位数据前关闭所有显示，防止打开位选锁存后段选数据通过位选锁存器
	wx = 1;
	P0 = weixuan[0];
	wx = 0;
	DelayMs(1);

	dx = 1;
	P0 = duanxuan[two];
	dx = 0;
	P0 = 0xff;
	wx = 1;
	P0 = weixuan[1];
	wx = 0;
	DelayMs(1);

	dx = 1;
	P0 = duanxuan[three];
	dx = 0;
	P0 = 0xff;
	wx = 1;
	P0 = weixuan[2];
	wx = 0;
	DelayMs(1);

	dx = 1;
	P0 = duanxuan[four];
	dx = 0;
	P0 = 0xff;
	wx = 1;
	P0 = weixuan[3];
	wx = 0;
	DelayMs(1);

	dx = 1;
	P0 = duanxuan[five];
	dx = 0;
	P0 = 0xff;
	wx = 1;
	P0 = weixuan[4];
	wx = 0;
	DelayMs(1);

	dx = 1;
	P0 = duanxuan[six];
	dx = 0;
	P0 = 0xff;
	wx = 1;
	P0 = weixuan[5];
	wx = 0;
	DelayMs(1);
}
