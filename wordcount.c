int WordCount(char file[]){//������ͳ�ƺ��� 
    FILE *pf=NULL;
    int wcount=0;
    pf=fopen(file,"r");
    if(pf==NULL){
        printf("Ѱ���ļ�ʧ��\n");
        exit(-1);
    }
    char mychar;
    mychar = fgetc(pf);
    while(mychar!=EOF){
        if(mychar>='a'&&mychar<='z'||mychar>='A'&&mychar<='Z'||mychar>='0'&&mychar<='9'){
            while(mychar>='a'&&mychar<='z'||mychar>='A'&&mychar<='Z'||mychar>='0'&&mychar<='9'||mychar=='_'){
                mychar=fgetc(pf);
            }
            wcount++;
            mychar=fgetc(pf);
        }
        mychar=fgetc(pf);
    }
    fclose(pf);
    return wcount;
}