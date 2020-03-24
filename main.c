int main(){//主函数 
    char input[10],File[200];
    while(1){
        printf("请输入用户命令：wc.exe-");
        scanf("%s",&input);
        if(input[0]=='c'){
           printf("请输入文件名：");
           scanf("%s",&File);
           int charcount=0;
           charcount=CharCount(File);
           printf("文件的字符数为：%d\n",charcount);
           continue;    
        }
        if(input[0]=='w'){
            printf("请输入文件名：");
            scanf("%s",&File); 
            int wordcount=0;
            wordcount=WordCount(File);
            printf("文件的词数为：%d\n",wordcount);
            continue;
        }
        if(input[0]=='l'){
            printf("请输入文件名:");
            scanf("%s",&File); 
            int linecount=0;
            linecount=LineCount(File);
            printf("文件的行数为：%d\n",linecount);
            continue;    
        }
        if(input[0]=='a'){
            printf("请输入文件名：");
            scanf("%s",&File); 
            ComplexCount(File);
            continue;
        }
    }
    system("pause");
    return 0;
}
