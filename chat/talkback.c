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
	getWeight();

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

