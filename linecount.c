int LineCount(char file[]){//����ͳ�ƺ��� 
    FILE *pf=NULL;
    int lcount=0;
    pf=fopen(file,"r");
    if(pf==NULL){
        printf("Ѱ���ļ�ʧ��\n");
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