/*
 * talkback.c 一个可以提供一些信息的对话框
 *
 *  Created on: 2015年11月6日
 *      Author: nancheng
 */
#include <stdio.h>
#include <string.h>  //提供strlen()的原型
#define DENSITY 62.4 //人的密度，单位是英镑/立方英尺
int main() {
	//getWeight();
	//printf("nihaso \n");
	//printf("%d",getInt());
	//printWhile();
	//printFor();
	printDoWhile();
	return 0;
}

void getWeight(void) {
	float weight, volume;
	int size, letters;
	char name[40];
	printf("你好，你最喜欢的名字是什么？ \n");
	scanf("%s", name);
	printf("%s，你大概有多重？\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("好的，%s，你的体积是 %2.2f 英镑/立方英尺 \n", name, volume);
	printf("还有，你的名字有%d个字母 \n", letters);
	printf("我们需要%d字节来存储它 \n", size);
}

int getInt(void){
	return 100;
}

const int TIMES=10;

void printWhile(void){
	int a;
	while(scanf("%d",&a)==1){
		printf("you have input %d \n",a);
	}
}
void printFor(void){
	int i;//i在for里面第一次声明，只有C99支持，然而我这儿不支持个
	for(i=0i;i<TIMES;i++){
		printf("I love you! %d \n",i);
	}
}

void printDoWhile(){
	char str[30];
	_Bool a=1;
	do{
		printf("请输入一个句子：___ \b\b\b ");
		scanf("%s",str);
		printf("你输入了：%s \n",str);
	}while(a);
}



