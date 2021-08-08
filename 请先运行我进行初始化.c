#include <stdio.h>
#include <stdlib.h>
int main(){
	puts("正在初始化 Scratch，请稍后...");
	puts("正在解压 Scratch 主程序...");
	system("xz -d \"Scratch 3.exe.tar.xz\" -v -v -e -9 --threads=0");
	system("tar -xvf \"Scratch 3.exe.tar\"");
	system("rm \"Scratch 3.exe.tar\"");
	puts("解压完成！正在解压资源文件...");
	system("xz -d resources/app.asar.tar.xz -v -v -e -9 --threads=0");
	system("tar -xvf resources/app.asar.tar");
	system("mv app.asar resources");
	system("rm resources/app.asar.tar");
	puts("初始化完毕！");
	system("pause");
}