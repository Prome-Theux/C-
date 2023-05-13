#include <stdio.h>
#include <string.h>
int sort (char *arg)
{
    char s;
    int len;//i需要指定长度，不然会出问题，导致最后一位丢失 怀疑是读取到了休止符。
    len=strlen(arg);
    for (int j=0;j<99;j++)
    {
        for (int i=0;i<len-1;i++)
        {
            if (arg[i]>arg[i+1])
            {
                s=arg[i];
                arg[i]=arg[i+1];
                arg[i+1]=s;
            }
        }
    }
    printf("%s",arg); 
}
int statistics (int *arg)
{
    
}




int main ()
{
    char str[100];
    char zero[100]="0";
    int sum[100];
    scanf("%s",str);
    //现在目标 
    //将获取到输入的字符串按ascll码排序，将相同的字符排在一起
    //创建一个变量，遍历字符串，遇到同样的字符变量+1，不同的字符变量归零。这样即可找到出现频率最高的字符。
    sort(str);


    


}