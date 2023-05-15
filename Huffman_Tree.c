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
    //printf("%s",arg); 
}

int statistics (char *arg,int *sum,int *p)//统计字母出现次数
{
    int len;
    len=strlen(arg);
    for(int i=0;i<len;i++)
    {
        sum[arg[i]-97]+=1;
    }
    
    for (int i=0;i<26;i++)
    {
        if(sum[i]!=0)
        {
            printf("%c:%d ",i+97,sum[i]);
            *p+=1;//    返回字母种类的值
        } 
    }
}

int Sort_Sum(int *sum ,int *sort_sum)//权值排序
{
    int h=0;
    for (int i=0;i<26;i++)
    {
        sort_sum[i]=sum[i];
        printf("%d%d ",sort_sum[i],sum[i]);
    }

    printf("\n");
    for (int j=0;j<99;j++)
    {
        for(int i=0;i<26;i++)
        {
            if(sort_sum[i]<sort_sum[i+1])
            {
                h=sort_sum[i];
                sort_sum[i]=sort_sum[i+1];
                sort_sum[i+1]=h;
            }
            
        }
    }
    for (int i=0;i<26;i++)
        printf("%d",sort_sum[i]);
} 


int main ()
{
    int Type_letter=0; //字符种类
    int *type_letter=&Type_letter;
    int sum[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};//统计字符出现的次数a-z
    int sort_sum[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int hf[5][100];
    char str[100];//输入的字符串
    char zero[100]="0";//用于比较

    for (int a=0;a<5;a++)
    {
        for (int b=0;b<100;b++)// 初始化哈夫曼数组
        {
            hf[a][b]=0;
            //printf("%d",hf[i][j]);
        }
    }


    for (int i=0;strcmp(str,zero)!=0;i++)
    {
        scanf("%s",str);
        sort(str);
        statistics(str,sum,type_letter);
        printf("\n");

        Sort_Sum(sum,sort_sum);
        printf("\n");
        //printf("%d",Type_letter);

        for(int j=0;j<Type_letter;j++)// 哈夫曼树权值
            //hf[1][j]=

    


        





        for (int a=0;a<5;a++)
        {
            for (int b=0;b<100;b++)// 清空列表
            {
                hf[a][b]=0;
                //printf("%d",hf[i][j]);
            }
        }

        for (int j=0;j<26;j++)  //清空数组
        {
            sum[j]=0;
            sort_sum[j]=0;
        }
    }



}