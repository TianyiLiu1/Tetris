// TETRIS.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	void DrawGameFrame()
    { 
		gotoxy(FrameX + Frame_width - 7, FrameY - 2);
		color(11);
		printf("趣味俄罗斯方块");
		color(12);
		goyoxy(FrameX, FrameY);
		printf("╔");
		goyoxy(FrameX + 2 * Frame_width - 2;FrameY);
		printf("╗");
		goyoxy(FrameX, FrameY + Frame_height);
		printf("╚");
		goyoxy(FrameX + 2 * Frame_width - 2; FrameY + Frame_height);
		printf("╝");
	}
	//上横框
	for (i = 2;i < 2 * Frame_width - 2;i + 2)
	{
		gotoxy(FrameX + i, FrameY + FrameY + height)
			printf("═");
	}
	//下横框
		for (i = 2;i < 2 * Frame_width - 2;i += 2)
		{
			gotoxy(FrameX + i, FrameY + FrameY _ height)
				printf("═");
			a[FrameX + i][FrameY + Frame_height] = 2;
		}
		//左竖框
		for (i = 1;i < Frame_height;i++)
		{
			gotoxy(FrameX, FrameY + i)
				printf("║");
			a[FrameX][FrameY + i] = 2;
		}
		//右竖框
		for (i = 1;i < Frame_height;i++)
		{
			gotoxy(FrameX+2*Frame_width-2, FrameY + i)
				printf("║");
			a[FrameX + 2 * Frame_width - 2][FrameY + i] = 2;
		}
		color(2);
		gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 7);
		printf("**********");
		gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 13);
		printf("**********");
		
		color(3);
		gotoxy(FrameX + 2 * Frame_width +13, FrameY + 7);
		printf("出现下一方块：");

		color(14);
		gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 17);
		printf("↑键：旋转");
		gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 19);
		printf("空格：暂停游戏");
		gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 15);
		printf("ESC：退出游戏");

}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
