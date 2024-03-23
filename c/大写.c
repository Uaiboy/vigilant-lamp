#include<stdio.h>
#include<string.h>
int main(){
    int i,len;
    char a[256];
    gets(a);//gets(a) 表示输入一个字符串到数组a，
    //a表示读取一个字符串存入a中,字符串输入结束标志为换行符。
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]>='a'&&a[i]<='z'){
            a[i]-=32;
        }
    }
    for(i=0;i<len;i++)
        printf("%c",a[i]);
}
