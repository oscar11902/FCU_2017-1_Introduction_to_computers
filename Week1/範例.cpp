#include <stdio.h>

int main()
{
	int group;			 //組數
	float answer[100];   //存放答案;
	int score[1001];	 //每組人數+分數
	int sum;			 //每組成績總和
	int count;			 //統計超過平均的人數
	float avg;			 //成績平均
	scanf("%d", &group); //讀取組數
	for (int i = 0; i < group; i++)
	{
		scanf("%d", &score[0]);			   //第一個位置放人數
		for (int k = 0; k < score[0]; k++) //讀取個別分數
		{
			scanf("%d", &score[k + 1]);
		}

		sum = 0;   //重置總分
		count = 0; //重置統計數字

		for (int k = 0; k < score[0]; k++) //計算總分
		{
			sum += score[k + 1];
		}

		avg = (float)sum / score[0]; //取平均

		for (int k = 0; k < score[0]; k++) //計算高於平均的人數
		{
			if (avg < score[k + 1])
				count++;
		}

		answer[i] = (float)count * 100 / score[0]; //計算百分比
	}

	printf("\n\n");
	for (int i = 0; i < group; i++) //印出解答
	{
		printf("%.3f%%\n", answer[i]);
	}
	return 0;
}
