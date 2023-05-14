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
int statistics (char *arg,int *sum)//统计字母出现次数
{
    int len;
    len=strlen(arg);
    for(int i=0;i<len;i++)
    {
        sum[arg[i]-97]+=1;
    }
    
    for (int i=0;i<26;i++)
    {
        printf("%d",sum[i]);
    }
}




int main ()
{
    int sum[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};//统计字符出现的次数a-z
    char str[100];//输入的字符串
    char zero[100]="0";//用于比较
    scanf("%s",str);
    sort(str);
    statistics(str,sum);
    //printf("%s",sum[0]);

    //现在目标 
    //将获取到输入的字符串按ascll码排序，将相同的字符排在一起
    //创建一个变量，遍历字符串，遇到同样的字符变量+1，不同的字符变量归零。这样即可找到出现频率最高的字符。
    //sort(str);

    


}