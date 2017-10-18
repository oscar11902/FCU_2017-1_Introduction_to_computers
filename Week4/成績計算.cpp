#include<stdio.h>

void sort(int[]);
double quizAvg(int[],int);

int main (){
	FILE* fp;
	int quiz[4],mid,final,counter=0,no_work;
	double sum,final_score;
	char name[20],no[3];
	
	fp=fopen("input.txt","r");
	sum=0;
	while(1){
		if(feof(fp)){
			printf("\n¥­§¡¦¨ÁZ¡G%.2lf\n\n",sum/counter);
			
			break;
		}
		fscanf(fp,"%s %s %d %d %d %d %d %d %d",no,name,&no_work,&quiz[0],&quiz[1],&quiz[2],&quiz[3],&mid,&final);
		final_score=quizAvg(quiz,no_work)*0.3+mid*0.3+final*0.4;
		printf("%s\t%s\t%.2lf\n",no,name,final_score);
		sum+=final_score;
		counter++;
	}	
	
}

double quizAvg(int quiz[4],int no_work){
	sort(quiz);
	if(no_work>1){
		return (quiz[0]+quiz[1]+quiz[2]+quiz[3])/4.0;
	}else if(no_work>0){
		return (quiz[0]+quiz[1]+quiz[2])/3.0;
	}else{
		return (quiz[0]+quiz[1])/2.0;
	}
	
}

void sort(int num[4]){
	int tmp;
	for(int i=0;i<4;i++){
		for(int k=0;k<4-i-1;k++){
			if(num[k]<num[k+1]){
				tmp=num[k];
				num[k]=num[k+1];
				num[k+1]=tmp;
			}
		}
	}
}
