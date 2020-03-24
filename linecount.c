int LineCount(char file[]){//行数统计函数 
    FILE *pf=NULL;
    int lcount=0;
    pf=fopen(file,"r");
    if(pf==NULL){
        printf("寻找文件失败\n");
        exit(-1);
    }
    char mychar;
    mychar = fgetc(pf);
    while(mychar!=EOF){
        if(mychar=='\n'){
            lcount++;
            mychar = fgetc(pf);
        }
        else{
            mychar = fgetc(pf);
        }
    }
    
    fclose(pf);
    return lcount+1;
}