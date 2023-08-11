struct CwebHttpResponse *eng_to_morse_convert_route(struct CwebHttpRequest *request){
    char *eng_text=request->get_param(request,"eng_text");
    char *operator=request->get_param(request,"operator");
    char *result;

    if(eng_text==NULL || operator==NULL){
        struct CTextStack *stack=render_eng_to_morse(NULL);
        return cweb_send_rendered_CTextStack_cleaning_memory(stack,200);
    }
    if(!(strcmp(operator,"Convert"))){
        int len=strlen(eng_text);
        int i=0;
        while(i<len){
            if(eng_text[i]=='a'|| eng_text[i]=='A'){
                result=strcat(result,"._ ");
            }
            if(eng_text[i]=='b'|| eng_text[i]=='B'){
                result=strcat(result,"_... ");
            }
            if(eng_text[i]=='c'|| eng_text[i]=='C'){
                result=strcat(result,"_._. ");
            }
            if(eng_text[i]=='d'|| eng_text[i]=='D'){
                result=strcat(result,"_.. ");
            }
            if(eng_text[i]=='e'|| eng_text[i]=='E'){
                result=strcat(result,". ");
            }
            if(eng_text[i]=='f'|| eng_text[i]=='F'){
                result=strcat(result,".._. ");
            }
            if(eng_text[i]=='g'|| eng_text[i]=='G'){
                result=strcat(result,"__. ");
            }
            if(eng_text[i]=='h'|| eng_text[i]=='H'){
                result=strcat(result,".... ");
            }
            if(eng_text[i]=='i'|| eng_text[i]=='I'){
                result=strcat(result,".. ");
            }
            if(eng_text[i]=='j'|| eng_text[i]=='J'){
                result=strcat(result,".___ ");
            }
            if(eng_text[i]=='k'|| eng_text[i]=='K'){
                result=strcat(result,"_._ ");
            }
            if(eng_text[i]=='l'|| eng_text[i]=='L'){
                result=strcat(result,"._ ");
            }
            if(eng_text[i]=='m'|| eng_text[i]=='M'){
                result=strcat(result,"__ ");
            }
            if(eng_text[i]=='n'|| eng_text[i]=='N'){
                result=strcat(result,"_. ");
            }
            if(eng_text[i]=='o'|| eng_text[i]=='O'){
                result=strcat(result,"___ ");
            }
            if(eng_text[i]=='p'|| eng_text[i]=='P'){
                result=strcat(result,".__. ");
            }
            if(eng_text[i]=='q'|| eng_text[i]=='Q'){
                result=strcat(result,"__._ ");
            }
            if(eng_text[i]=='r'|| eng_text[i]=='R'){
                result=strcat(result,"._. ");
            }
            if(eng_text[i]=='s'|| eng_text[i]=='S'){
                result=strcat(result,"... ");
            }
            if(eng_text[i]=='t'|| eng_text[i]=='T'){
                result=strcat(result,"_ ");
            }
            if(eng_text[i]=='u'|| eng_text[i]=='U'){
                result=strcat(result,".._ ");
            }
            if(eng_text[i]=='v'|| eng_text[i]=='V'){
                result=strcat(result,"..._ ");
            }
            if(eng_text[i]=='w'|| eng_text[i]=='W'){
                result=strcat(result,".__ ");
            }
            if(eng_text[i]=='x'|| eng_text[i]=='X'){
                result=strcat(result,"_.._ ");
            }
            if(eng_text[i]=='y'|| eng_text[i]=='Y'){
                result=strcat(result,"_.__ ");
            }
            if(eng_text[i]=='z'|| eng_text[i]=='Z'){
                result=strcat(result,"__.. ");
            }
            ++i;
        }
    }
    struct CTextStack *stack=render_eng_to_morse(result);
    return cweb_send_rendered_CTextStack_cleaning_memory(stack,200);
}