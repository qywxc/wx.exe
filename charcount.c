int CharCount(char file[]){//�ַ���ͳ�ƺ��� 
    FILE *pf=NULL;
    int ccount=0;
    pf=fopen(file,"r");
    if(pf==NULL){
        printf("Ѱ���ļ�ʧ��\n");
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