int main(){//������ 
    char input[10],File[200];
    while(1){
        printf("�������û����wc.exe-");
        scanf("%s",&input);
        if(input[0]=='c'){
           printf("�������ļ�����");
           scanf("%s",&File);
           int charcount=0;
           charcount=CharCount(File);
           printf("�ļ����ַ���Ϊ��%d\n",charcount);
           continue;    
        }
        if(input[0]=='w'){
            printf("�������ļ�����");
            scanf("%s",&File); 
            int wordcount=0;
            wordcount=WordCount(File);
            printf("�ļ��Ĵ���Ϊ��%d\n",wordcount);
            continue;
        }
        if(input[0]=='l'){
            printf("�������ļ���:");
            scanf("%s",&File); 
            int linecount=0;
            linecount=LineCount(File);
            printf("�ļ�������Ϊ��%d\n",linecount);
            continue;    
        }
        if(input[0]=='a'){
            printf("�������ļ�����");
            scanf("%s",&File); 
            ComplexCount(File);
            continue;
        }
    }
    system("pause");
    return 0;
}
