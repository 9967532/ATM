#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define NUM 1001
int j = 0, k;
struct yonghu
{
	char ID[20];
	char key[20];
	int account;
}user[NUM];

void denglu();
void denglu2();
void shezhi();
void shezhi2(); 
void enter();
void enter2();
void enter3();
void enter4();
void tuichu();
void tuichu2();
void zhuanzhang();
void zhuanzhang2();
void chaxun();
void chaxun2();
void qukuan();
void qukuan2();
void cunkuan();
void cunkuan2();
void xiugai();
void xiugai2();
void load();
void save();

int main()
{
    printf("\t\t___________________________________________________\n");
    printf("\t\t|                                                 |\n");
    printf("\t\t|                  wode银行欢迎你                 |\n");
    printf("\t\t|                                                 |\n");
    printf("\t\t|        wode Bank of China welcomes you          |\n");
    printf("\t\t|                                                 |\n");
    printf("\t\t|                     中文服务                    |\n");
    printf("\t\t|                      请按1！                    |\n");
    printf("\t\t|                                                 |\n");
    printf("\t\t|                  Engilsh servise                |\n");
    printf("\t\t|                    press two！                  |\n");
    printf("\t\t|                                                 |\n");
    printf("\t\t|_________________________________________________|\n");

	int x;
	scanf("%d",&x); 
	if(x==1)
	{
			enter();
	}
	else
	if(x==2)
	{
	        enter3();
	}
	return 0;
}

void enter3()
{
	int a;
	load();
	system("cls");
	printf(" \t\t\t             ATM analog system\n");
	printf(" \t\t\t                                         \n");
	printf("\t\t\t         wode Bank of China welcomes you \n");
	printf(" \t\t\t  =======================================\n");
	printf("\n\n");
	printf("\t\t\t       You have the following options     \n");
	printf("\n\n");
	printf(" \t\t\t                                         \n");
	printf(" \t\t\t  |                1.sign in            |\n");
	printf(" \t\t\t  |                2.sign up            |\n");
	printf(" \t\t\t  |                3.back               |\n");
	printf(" \t\t\t                                        \n");
	printf("\n\n");
	printf(" \t\t\t    please enter your operation number： \n\n\t\t\t\t  ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:system("cls");//清屏
		shezhi2();
		break;
	case 2:system("cls");
		denglu2();
		break;
	case 3:system("cls");
		tuichu2();
		break;
	default:printf("\t\t\t\t无此操作项\n请重新选择\n");
		system("pause");
		system("cls");
		enter();
	}
}

void tuichu2()
{
	printf("\t\t\t          Thank you for using it!          \n");
	printf("\t\t\t         welcome to use next time          \n");
	printf("\t\t\t               see you again!              \n");
	exit(0);
}
void enter4()
{
	int n;
	do
	{
		printf("\n\n\n");
		printf(" \t\t\t                                     \n");
		printf(" \t\t\t|  A T M System PERSONAL Interfac  |\n");
		printf(" \t\t\t|  you have the f0llowing options  |\n");
		printf(" \t\t\t            \n");
		printf(" \t\t\t            \n");
		printf(" \t\t\t    |     1.  inquire        \n");
		printf(" \t\t\t    |     2.  withdrawn      \n");
		printf(" \t\t\t    |     3.  transfer       \n");
		printf(" \t\t\t    |     4.  deposit        \n");
		printf(" \t\t\t    |     5.change password  \n");
		printf(" \t\t\t    |     6.  return         \n");
		printf(" \t\t\t               \n\n\t\t\t\t  ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:system("cls");
			chaxun2();
			break;
		case 2:system("cls");
			qukuan2();
			break;
		case 3:system("cls");
			zhuanzhang2();
			break;
		case 4:system("cls");
			cunkuan2();
			break;
		case 5:system("cls");
			xiugai2();
			break;
		case 6:system("cls");
			enter3();
			break;
		default:printf("\t\t\t\t无此操作项\n\n");
			system("pause");
			system("cls");
		}
	} while (n > 4 && n < 0);
}

void denglu2()
{
	int i, n, m;
	char  id[20], kw[20];
	printf("\t\t   Enter an incorrect account or password for three consecutive times and return to the main menu\n\n\n");
	for (i = 0; i < 3; i++)
	{
		printf("please enter your login account\n");
		scanf("%s", id);
		for (k = 0; k < NUM - 1; k++)
		{
			if (strcmp(id, user[k].ID) == 0)
			{
				m = 1;
				break;
			}
			else
				m = 0;
		}
		if (m == 0)
		{
			printf("The account does not exist%d\n", 2 - i);
			if ((2 - i) == 0)
			{
				printf("Enter an incorrect account or password for three consecutive times and return to the main menu......\n\n\n");
				system("pause");
				enter3();
			}
		}
		if (m == 1)
		{
			printf("Please enter your login password\n");
			for (n = 0; n < 3; n++)
			{
				scanf("%s", kw);
				if (strcmp(kw, user[k].key) == 0)
				{
					system("cls");
					enter4();
				}
				else
				{
					printf("The account does not exist%d\n", 2 - n);
					if ((2 - n) == 0)
					{
						printf("Enter an incorrect account or password for three consecutive times and return to the main menu......\n\n\n");
						system("pause");
						enter3();
					}
				}
			}
		}
	}
}

void chaxun2()
{
	char ch;
	load();
	printf("\t\t\t     wlecome tofind servise       \n");
	printf("\t\t\t     your balance%dRNB\n\n", user[k].account);
	system("pause");
	system("cls");
	printf("\n\n\n");
	ch = getchar();//接收最后的回车符
	if (ch == '\n')
	{
		enter4();
	}
}

void qukuan2()
{
	int i, x;
	char a, ch;
	printf(" \t\t\t                                                        \n");
	printf(" \t\t\t|  The minimum withdrawal amount of our bank is100RNB  \n");
	printf(" \t\t\t|                   your card balance                  \n");
	printf(" \t\t\t|                         %dRMB                        \n", user[k].account);
	printf("\t\t\t\tplease input Custom amount:\n\t\t\t\t  ");
	scanf("%d", &x);						
	if (x <= user[k].account)
	{
		user[k].account = user[k].account - x;
		printf(" \t\t\t\ttake%dRNB\n", x);
		printf(" \t\t\t\tyour card balance%dRNB\n", user[k].account);
	}
	else if (x > user[k].account)
	{
		printf("\t\t\t\tYour credit card balance is insufficient\n");
		printf("\t\t\t\tPlease re-enter the withdrawal amount:\n");
	}
	printf(" \t\t\t\tPlease choose whether to continue the withdrawal\n");
	printf(" \t\t\t\tYES:1          NO:2\n\n\t\t\t\t  ");
	scanf("%s", &a);
	if (a == '1')
	{
		save();
		qukuan2();
	}
	else
		if (a == '2')
		{
			save();
			system("pause");//冻结屏幕
			system("cls");
			printf("\n\n\n");
		}
		else
		{
			save();
			system("pause");//冻结屏幕
			system("cls");
			printf("\n\n\n");
		}
				
	ch = getchar();//接收最后的回车符
	if (ch == '\n')
	{
		system("cls");
		enter4();
	}
}

void cunkuan2()
{
	int a;
	printf("\t\t\t\tyour still have a balance:\n\n\t\t\t\t  ");
	scanf("%d", &a);
	user[k].account = user[k].account + a;
	save();
	printf(" \t\t\t\tyyour balance %dRNB\n", user[k].account);
	system("pause");//冻结屏幕
	system("cls");
	printf("\n\n\n");
	enter2();
}
void xiugai2()
{
	printf("\t\t\t\tplease you input new password\n\t\t\t\t  ");
	scanf("%s", user[k].key);
	save();
	system("pause");//冻结屏幕
	system("cls");
	printf("\n\n\n");
	enter4();
}

void zhuanzhang2()
{
	int a,  x;
	char kahao[20];
	printf("\t\t\t       please you input tranfer account:\n\t\t\t\t  ");
	scanf("%s", kahao);
	for (a = 0; a < NUM - 1; a++)
	{
		if (!strcmp(kahao, user[a].ID))
		{
			printf("\t\t\t\t  true account\n\n");
			break;
		}
	}
	if (strcmp(kahao, user[a].ID))
	{
		printf("\t\t\t\t  not find account\n\n");
		system("pause");
		zhuanzhang2();
	}
	printf("\t\t\t\tplease input transfer RNB\n\t\t\t\t    ");
	scanf("%d", &x);

	if (x > user[k].account)
	{
		printf("\t\t\t\tPlease re-enter the withdrawal amount\n");
		printf("\t\t\t\tPlease choose whether to continue the withdrawal:\n");
	}
	else
	{
		user[k].account = user[k].account - x;
		user[a].account = user[a].account + x;
		save();
	}
	system("pause");//冻结屏幕
	system("cls");
	printf("\n\n\n");
	enter4();
}

void shezhi2()
{
	char ch;
	if (user[1000].account != 0)
	{
		j = user[1000].account;
	}
	printf("\n\n\t\t\t\tplease set your card number:\n\t\t\t\t  ");
	scanf("%s", user[j].ID);
	printf("\n\t\t\t\tplease set your password:\n\t\t\t\t  ");
	scanf("%s", user[j].key);
	user[j].account = 0;
	printf("card number：%s \nbalance：%4d\n", user[j].ID, user[j].account);
	user[1000].account = ++j;
	save();
	printf("\n\n\t\t\t\tCongratulations on your successful registration!");
	printf("\n\n\n");
	system("pause");
	printf("\t\t\t\tback step!\n");
	printf("\n\n\n");
	system("cls");
	ch = getchar();//接收最后的回车符
	if (ch == '\n')
	{
		enter3();
	}
}

void enter()
{
	int a;
	load();
	system("cls");
	printf(" \t\t\t                       \n");
	printf(" \t\t\t |  欢迎来到wode银行  |\n");
	printf(" \t\t\t |                    |\n");
	printf(" \t\t\t |                    |\n");
	printf(" \t\t\t | 请选择你办理的业务 |\n");
	printf(" \t\t\t |                    |\n");
	printf(" \t\t\t |       1.注册       |\n");
	printf(" \t\t\t |       2.登录       |\n");
	printf(" \t\t\t |       3.退出       |\n");
	printf(" \t\t\t |                    |\n");
	
	printf(" \t\t\t   请输入您的操作号： \n\n\t\t\t\t  ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:system("cls");//清屏
		shezhi();
		break;
	case 2:system("cls");
		denglu();
		break;
	case 3:system("cls");
		tuichu();
		break;
	default:printf("\t\t\t\t无此操作项\n请重新选择\n");
		system("pause");
		system("cls");
		enter();
	}
}

void load()
{
	FILE* fp;
	int i;
	if ((fp = fopen("D:/new.txt", "r")) == NULL)
	{
		printf("NULL\n");
		return;
	}
	for (i = 0; !feof(fp); i++)
	{
		fread(&user[i], sizeof(struct yonghu), 1, fp);
	}
	fclose(fp);
	system("cls");
	printf("您的余额为：\n");
}
void save()
{
	FILE* fp;
	if ((fp = fopen("D:/new.txt", "w")) == NULL)
	{
		printf("NULL\n");
		exit(0);
	}
	fwrite(user, sizeof(struct yonghu), NUM, fp);
	fclose(fp);
}

void shezhi()
{
	char ch;
	if (user[1000].account != 0)
	{
		j = user[1000].account;
	}
	printf("\n\n\t\t\t\t请设置您的卡号:\n\t\t\t\t  ");
	scanf("%s", user[j].ID);
	printf("\n\t\t\t\t请设置您的密码:\n\t\t\t\t  ");
	scanf("%s", user[j].key);
	user[j].account = 0;
	printf("卡号：%s \n余额：%4d\n", user[j].ID, user[j].account);
	user[1000].account = ++j;
	save();
	printf("\n\n\t\t\t\t恭喜您注册成功!");
	printf("\n\n\n");
	system("pause");
	printf("\t\t\t\t按回车键返回上一级\n");
	printf("\n\n\n");
	system("cls");
	ch = getchar();//接收最后的回车符
	if (ch == '\n')
	{
		enter();
	}
}

void tuichu()
{
	printf("\t\t\t      感谢您的使用!     \n");
	printf("\t\t\t      欢迎下次光临!     \n");
	exit(0);
}
void denglu()
{
	int i, n, m;
	char  id[20], kw[20];
	printf("\t\t    连续输错账号或密码三次，将返回主菜单\n");
	for (i = 0; i < 3; i++)
	{
		printf("请输入登录账号\n");
		scanf("%s", id);
		for (k = 0; k < NUM - 1; k++)
		{
			if (strcmp(id, user[k].ID) == 0)
			{
				m = 1;
				break;
			}
			else
				m = 0;
		}
		if (m == 0)
		{
			printf("该账号不存在,剩余输入次数%d\n", 2 - i);
			if ((2 - i) == 0)
			{
				printf("账号输入错误3次，即将返回菜单......\n");
				system("pause");
				enter();
			}
		}
		if (m == 1)
		{
			printf("请输入登录密码\n");
			for (n = 0; n < 3; n++)
			{
				scanf("%s", kw);
				if (strcmp(kw, user[k].key) == 0)
				{
					system("cls");
					enter2();
				}
				else
				{
					printf("密码输入错误,剩余输入次数%d\n", 2 - n);
					if ((2 - n) == 0)
					{
						printf("密码输入错误3次，即将返回菜单......\n");
						system("pause");
						enter();
					}
				}
			}
		}
	}
}

void enter2()
{
	int n;
	do
	{
		printf("\n\n\n");
		printf(" \t\t\t-----------------------------\n");
		printf(" \t\t\t|  A T M 系 统 个 人 界 面  |\n");
		printf(" \t\t\t|     您 有 以 下 选 择     |\n");
		printf(" \t\t\t-----------------------------\n");
		printf(" \t\t\t                          \n");
		printf(" \t\t\t    |                    \n");
		printf(" \t\t\t    |     1.  查询       \n");
		printf(" \t\t\t    |     2.  取款       \n");
		printf(" \t\t\t    |     3.  转账       \n");
		printf(" \t\t\t    |     4.  存款       \n");
		printf(" \t\t\t    |     5.修改密码     \n");
		printf(" \t\t\t    |     6.返回目录     \n");
		printf(" \t\t\t                         \n\n\t\t\t\t  ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:system("cls");
			chaxun();
			break;
		case 2:system("cls");
			qukuan();
			break;
		case 3:system("cls");
			zhuanzhang();
			break;
		case 4:system("cls");
			cunkuan();
			break;
		case 5:system("cls");
			xiugai();
			break;
		case 6:system("cls");
			enter();
			break;
		default:printf("\t\t\t\t无此操作项\n\n");
			system("pause");
			system("cls");
		}
	} while (n > 4 && n < 0);
}

void chaxun()
{
	char ch;
	load();
	printf("\t\t\t      欢迎使用查询服务...\n");
	printf("\t\t\t      您的余额为%d元\n\n", user[k].account);
	system("pause");
	system("cls");
	printf("\n\n\n");
	ch = getchar();//接收最后的回车符
	if (ch == '\n')
	{
		enter2();
	}
}

void qukuan()
{
	int i, x;
	char a, ch;
	printf(" \t\t\t                               \n");
	printf(" \t\t\t|  本银行最低取款金额为100元  \n");
	printf(" \t\t\t|       您卡号的余额为        \n");
	printf(" \t\t\t|       %d元                  \n", user[k].account);
    printf("\t\t\t\t请输取款的金额:\n\t\t\t\t  ");
	scanf("%d", &x);							
	if (x <= user[k].account)
	{
		user[k].account = user[k].account - x;
		printf(" \t\t\t\t您取了%d元钱\n", x);
		printf(" \t\t\t\t您的余额为%d元\n", user[k].account);
	}
	else if (x > user[k].account)
	{
		printf("\t\t\t\t您卡里的余额不足\n");
		printf("\t\t\t\t请重新输入提取金额:\n");
	}
	printf(" \t\t\t\t请选择是否继续取款\n");
	printf(" \t\t\t\t是:1          否:2\n\n\t\t\t\t  ");
	scanf("%s", &a);
	if (a == '1')
	{
		save();
		qukuan();
	}
	else
		if (a == '2')
		{
			save();
			system("pause");//冻结屏幕
			system("cls");
			printf("\n\n\n");
		}
		else
		{
			save();
			system("pause");//冻结屏幕
			system("cls");
			printf("\n\n\n");
		}		
	ch = getchar();//接收最后的回车符
	if (ch == '\n')
	{
		system("cls");
		enter2();
	}
}

void cunkuan()
{
	int a;
	printf("\t\t\t\t请输入存入账户的金额:\n\n\t\t\t\t  ");
	scanf("%d", &a);
	user[k].account = user[k].account + a;
	save();
	printf(" \t\t\t\t您的余额为%d元\n", user[k].account);
	system("pause");//冻结屏幕
	system("cls");
	printf("\n\n\n");
	enter2();
}

void xiugai()
{
	printf("\t\t\t\t请输入新的密码\n\t\t\t\t  ");
	scanf("%s", user[k].key);
	save();
	system("pause");//冻结屏幕
	system("cls");
	printf("\n\n\n");
	enter2();
}

void zhuanzhang()
{
	int a,  x;
	char kahao[20];
	printf("\t\t\t       请输入转账卡号:\n\t\t\t\t  ");
	scanf("%s", kahao);
	for (a = 0; a < NUM - 1; a++)
	{
		if (!strcmp(kahao, user[a].ID))
		{
			printf("\t\t\t\t  卡号正确\n\n");
			break;
		}
	}
	if (strcmp(kahao, user[a].ID))
	{
		printf("\t\t\t\t  卡号不存在\n\n");
		system("pause");
		zhuanzhang();
	}
	printf("\t\t\t\t请输入转账金额\n\t\t\t\t    ");
	scanf("%d", &x);
	if (x > user[k].account)
	{
		printf("\t\t\t\t您卡里的余额不足\n");
		printf("\t\t\t\t请重新输入提取金额:\n");
	}
	else
	{
		user[k].account = user[k].account - x;
		user[a].account = user[a].account + x;
		save();
	}
	system("pause");//冻结屏幕
	system("cls");
	printf("\n\n\n");
	enter2();
}
