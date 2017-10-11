#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;							//創建檔案指標 
	char buffer[256],str[256];			//buffer->檔案讀取暫存  str->欲搜尋字串 
	fp=fopen("input.txt","r");			//開啟檔案 
	scanf("%s",str);					//輸入要搜尋的字串 
	
	while(1){							//用迴圈讀取檔案 
		/*
		當讀到檔案結尾時結束迴圈		
		*/ 
		if(feof(fp)){					
			printf("not found!!\n");
			break;
		}
		fscanf(fp,"%s",buffer);			//將檔案字串放進buffer 
		if(strstr(buffer,str)){			//比對字串，如果有就印出找到並跳出迴圈 
			printf("found!!\n");		 
			break;						
		}
	} 
	fclose(fp);							//關閉檔案 
	
	
	return 0;
} 
