struct CwebHttpResponse *morse_to_eng_convert_route(struct CwebHttpRequest *request){
    char *morse_text=request->get_param(request,"morse_text");
    char *operator=request->get_param(request,"Convert");
    char *result;
    if(morse_text==NULL || operator==NULL){
        struct CTextStack *stack=render_morse_to_eng(NULL);
        return cweb_send_rendered_CTextStack_cleaning_memory(stack,200);
    }
    if(!(strcmp(operator,"Convert"))){
        ;
    }
}