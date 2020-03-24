int CharCount(char file[]){//字符数统计函数 
    FILE *pf=NULL;
    int ccount=0;
    pf=fopen(file,"r");
    if(pf==NULL){
        printf("寻找文件失败\n");
        exit(-1);
    }
    char mychar;
    mychar = fgetc(pf);
    while(mychar!=EOF){
        mychar = fgetc(pf);
        ccount++;
    }
    fclose(pf);
    return ccount;
}